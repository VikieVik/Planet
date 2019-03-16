/*
  Planet - Library for interfacing Acsip LoRa module over UART
  Created by Vikas M. Singh, March 7, 2019.
  Released into the public domain.
  -----------------------------------------------------------------------
  NOTE: In order to use this code you must have configured the 
  acsip LoRa module's required device keys like deveui, appkey for
  otaa or networksessionkey,appsessionkey etc for abp activation 
*/

#ifndef Planet_h
#define Planet_h

#include "Arduino.h"
#include "SoftwareSerial.h"

class Planet
{
public:
  Planet(int rx, int tx);
  void serial();
  void joinOTAA();
  void joinABP();
  void sendData(String data);

private:
  String str1;
  String str2;
  String _data;
  int _rx;
  int _tx;
};

#endif
