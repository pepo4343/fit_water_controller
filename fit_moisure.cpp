#include "fit_moisure.h"

FITMoisure::FITMoisure(HardwareSerial& hardwareSerial){
  Serialx = &hardwareSerial;
};

void FITMoisure::init(){
    Serialx->begin(BUAD_RATE);
    Serialx->println("INIT");
};
