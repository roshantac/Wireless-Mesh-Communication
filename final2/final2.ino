

//@ auther :Muhammed roshan p
//          Meera menon
//          Gayathri n kartha
//          Amina shanavas
// nrf library edited version of spirilis     
// platform ,arduino ,energia ,wiring.
//using software SPI for display and Hardware SPI for nrf module. 2 SPI devices.
#include <Energia.h>
#include "LCD_5110.h"
#include <Enrf24.h>
#include <nRF24L01.h>
#include <string.h>
#include <SPI.h>

const uint8_t txaddr[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0x01 };
const uint8_t rxaddr[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0x01 };

#define A0 23
#define A1 24
#define A2 25
#define A3 27
#define A4 26


//SCE,SCLK,DIN,DC,RST,LED,PUshbut
LCD_5110 myScreen = LCD_5110(3,6,5,4,2,19,PUSH2);
Enrf24 radio(11,12,13); //CE,CSN,IRQ

String dataRX,dataTX,DI,MI="2";// destination id ,MI mother id
//void dumpissue(uint8_t);
void(*resetFunc)(void)=0;
//functions
void menu();
void welcome();
void sent();
void rcv();
void searchs();
void sndmsg();
void rep();
void dump(uint8_t);

void setup()
{
//LCD initialization
//Serial.begin(9600);
myScreen.begin();
//push button initialization

pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
pinMode(A3,INPUT);
pinMode(A4,INPUT);

//nRF initialization
SPI.begin();
SPI.setDataMode(SPI_MODE0);
SPI.setBitOrder(MSBFIRST);
//SPI.setClockDivider(SPI_CLOCK_DIV8);
radio.begin();
radio.setChannel(88);
dump(radio.radioState());
radio.setRXaddress((void*)txaddr);


welcome();

}

/// main function



void loop()
{
rep();

}

  void menu()
  {
  myScreen.setFont(0);
  myScreen.clear();
  myScreen.text(5,0 ,"MENU");
  myScreen.text(1,2,"1.SEND");
  myScreen.text(1,3,"2.RECIEVE");
  myScreen.text(1,4,"3.SEARCH ");
delay(1000);

}

void rep()
{
delay(100);
menu();
while(1)
{
    if (digitalRead(A1)==HIGH)
  {
    
    sent();
  }
if (digitalRead(A2)==HIGH)
 
 {
  
  rcv();
 }
if (digitalRead(A3)==HIGH)
 {
  
 searchs();
 }
 else;
}
}

//serach begins here
 void searchs()
 {

 }

 //welcome screen
 void welcome(void)
  {
  myScreen.clear();
  myScreen.setFont(1);
  myScreen.text(1,2,"NODCOM");
  delay(1000);
  myScreen.clear();
  delay(1000);
  myScreen.text(1,2,"NODCOM");
  delay(1000);
  myScreen.clear();
  delay(500);
  
  myScreen.clear();
  myScreen.setFont(1);
  myScreen.text(1,2,"NODCOM");
  delay(1000);
  myScreen.clear();
  delay(1000);
  myScreen.text(1,2,"NODCOM");
  delay(1000);
  myScreen.clear();
  delay(500);
  }
 void sent()
 {
  delay(100);
   DI="0";
  //sending function
  myScreen.clear();
  myScreen.text(0,0,"SELECT TARGET");
  myScreen.text(0,2,"1. N1");
  myScreen.text(0,3,"2. N2");
  myScreen.text(0,4,"3. N3 ");
  myScreen.text(0,5,"4. BROADCAST ");
//reset push button
while(1)
{


if (digitalRead(A1)==HIGH)
  {
    DI="1";
    selectmsg();
    break;
    }

else if (digitalRead(A2)==HIGH)
   {
    DI="2";
    selectmsg();
    break;
   }

else if (digitalRead(A3)==HIGH)
   {
    DI="3";
    selectmsg();
    break;
   }

else if(digitalRead(A4)==HIGH)
   {DI="B";
   selectmsg();//broadcast
   break;
   }
else if(digitalRead(A0)==HIGH)
   {
       rep();

   }
   //else;
   
}


}

//select mesg defenition
void selectmsg()
{
  delay(100);
  myScreen.clear();
  myScreen.setFont(0);
  myScreen.text(0,0,"Select Message");
  myScreen.text(0,2,"1.How are you");
  myScreen.text(0,3,"2.Need help");
  myScreen.text(0,4,"3.I am good");
  myScreen.text(0,5,"4.recieved");

while(1)
{

if (digitalRead(A1)==HIGH)
 {
     dataTX="How are you" ;
     sndmsg();
 }//do concatunation of a <the name of reciever> and msg
if (digitalRead(A2)==HIGH)
  {
      dataTX="Need help";//do concatunation of a <the name of reciever> and msg
      sndmsg();
  }
if (digitalRead(A3)==HIGH)
   {
       dataTX="I am good";
       sndmsg();
    }//do concatunation of a <the name of reciever> and msg
 if(digitalRead(A4)==HIGH)
   {
       dataTX="Recieved";
       sndmsg();//do concatunation of a <the name of reciever> and msg
   }
 if(digitalRead(A0)==HIGH)
  rep();//resetFunc();
}
}

  // Data that will be Transmitted from the transmitter


void sndmsg()
{
  myScreen.clear();
  radio.setTXaddress((void*)txaddr);
  myScreen.text(3,3,"Sending...");
  delay(1000);
  dataTX=String(DI)+String(MI)+String(dataTX);
  //concatunate DI,MI,dataTX;
  myScreen.clear(); 
  radio.disableRX();
  delay(100);
  for(int i=0;i<5;i++)
  {
  radio.print(dataTX);
 
  radio.flush();
  delay(100); 
  }
  
  // First, s]top listening so we can talk
  
  dump(radio.radioState());
  //radio.print(dataTX ); //  Transmit the data
 
  myScreen.clear();
  myScreen.text(3,3,"Done.  ");
  delay(1000);
  rep();

}


//nRF24L01-SimpleReceive-01

void rcv()
{

  myScreen.clear();
  myScreen.setFont(0);
  dump(radio.radioState());
  delay(2000);
  myScreen.clear();
  myScreen.text(1,1,"Listening..");

  radio.enableRX();
  delay(100);
  //dump(radio.radioState());
  while (!radio.available(true));
  if(radio.read(&dataRX))

{ delay(100);       
  dump(radio.radioState());
//  Serial.println(dataRX);    
        if(dataRX.substring(0,1)==MI)  //2 is the address of our node if it is our node print else retransmit
           {
            myScreen.clear();
            myScreen.text(2,1,dataRX.substring(2)); //printing data on display
            myScreen.text(2,2,dataRX.substring(3,14));
           
            delay(15000);
           }
           // else
           // if(dataRX.substring(0,1)==MI);
         else
            {

                dataTX=String(dataRX);
                sndmsg();
                // adding string arduino function
            }

   myScreen.clear();
   radio.disableRX();  // First, stop listening so we can talk
   delay(1000);
   rep();//resetFunc();

}

}

void dump(uint8_t status)
{
 // Serial.print("Enrf24 radio transceiver status: ");
  switch (status) {
    case ENRF24_STATE_NOTPRESENT:
      myScreen.text(1,3,"NO TRANSCEIVER");
      delay(1000);
      break;

    case ENRF24_STATE_DEEPSLEEP:
      myScreen.text(1,3,"DEEP SLEEP ");
      delay(1000);
      break;

    case ENRF24_STATE_IDLE:
      myScreen.text(1,3,"IDLE ");
      delay(1000);
      break;

    case ENRF24_STATE_PTX:
      myScreen.text(1,3,"Actively Tx");
      delay(1000);
      break;

    case ENRF24_STATE_PRX:
      myScreen.text(1,3,"Receive Mode");
      delay(1000);
      break;

    default:
      myScreen.text(1,3,"UNKNOWN ");
      delay(1000);
 
  }

}
