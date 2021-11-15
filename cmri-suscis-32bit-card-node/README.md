# SUSCUIS 32 Bit Card Cmri Node 

---- 

### for every input or output card 32 pins will be added into the total max 2048 pin for input and ouput 

### default config for the cmri object 
* CMRI(unsigned int address = 0, unsigned int input_bits = 24, unsigned int output_bits = 48)


```

#include <CMRI.h>

CMRI cmri;

void setup() {
  Serial.begin(9600, SERIAL_8N2); // SERIAL_8N2 to match what JMRI expects CMRI hardware to use
  pinMode(13, OUTPUT);
}

void loop() {
  cmri.process();
  digitalWrite(13, cmri.get_bit(0));
  cmri.set_bit(int n, bool b);
}

```