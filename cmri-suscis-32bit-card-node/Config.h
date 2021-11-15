#ifndef Config_h
#define Config_h
#include "Arduino.h"


#define CMRI_NODE_ADDRESS 1
#define SERIAL_BOARD_RATE 9600

//The maximum combined number of addressable inputs and outputs is 2048 
// SUSCIS 32BIT CARD CONFIGURATION 
// CMRI_INPUT_PINS + CMRI_OUTPUT_PINS <= 2048

//32 * N = CMRI_INPUT_PINS
#define CMRI_INPUT_PINS 32

//32 * N = CMRI_OUTPUT_PINS
#define CMRI_OUTPUT_PINS 32

#endif
