/*
  Planet - Library for interfacing Acsip LoRa module over UART
  Created by Vikas M. Singh, March 7, 2019.
  Released into the public domain.
  -----------------------------------------------------------------------
  NOTE: In order to use this code you must have configured the 
  acsip LoRa module's required device keys like deveui, appkey for
  otaa or networksessionkey,appsessionkey etc for abp activation 
*/

#include "Arduino.h"
#include "SoftwareSerial.h"
#include "Planet.h"

//constructor to intialize rx tx pins
Planet::Planet(int rx, int tx)
{
    int _rx = rx;
    int _tx = tx;
}

//method of joining network over otaa
void Planet::joinOTAA()
{
    SoftwareSerial mySerial(_rx, _tx);
    mySerial.begin(115200);
    delay(100);
    mySerial.print("mac join otaa");
    delay(10000);
    mySerial.end();
    delay(100);
}

//method for joinig network over abp
void Planet::joinABP()
{
    SoftwareSerial mySerial(_rx, _tx);
    mySerial.begin(115200);
    delay(100);
    mySerial.print("mac join abp");
    delay(10000);
    mySerial.end();
    delay(100);
}

//method for sending string data passed to it
void Planet::sendData(String data)
{
    SoftwareSerial mySerial(_rx, _tx);
    mySerial.begin(115200);
    String _data = data;
    String str1 = _data;
    String str2 = ("mac tx ucnf 15 " + str1);
    mySerial.print(str2);
    delay(10);
    mySerial.end();
}
