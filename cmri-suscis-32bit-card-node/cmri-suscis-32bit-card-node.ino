
#include "CMRI.h"
#include "Config.h"

CMRI cmri(CMRI_NODE_ADDRESS, CMRI_INPUT_PINS, CMRI_OUTPUT_PINS);

void setup() {
  // SERIAL_8N2 to match what JMRI expects CMRI hardware to use
  Serial.begin(SERIAL_BOARD_RATE, SERIAL_8N2);
}

void loop() {
  cmri.process();
  //cmri.get_bit(0);
  //cmri.set_bit(n, 0);||//cmri.set_bit(n, 1);
}
