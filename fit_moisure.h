#ifndef _FIT_MOISURE_H
#define _FIT_MOISURE_H


#include "Arduino.h"

#define BUAD_RATE 9600


class FITMoisure {
    public:
      HardwareSerial *Serialx;
      FITMoisure(HardwareSerial& hardwareSerial);
    
      void init();
};

#endif
