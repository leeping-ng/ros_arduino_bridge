/* *************************************************************
   Encoder driver function definitions - by James Nugen
   ************************************************************ */
   
   
#ifdef ARDUINO_ENC_COUNTER
  //below can be changed, but should be PORTD pins; 
  //otherwise additional changes in the code are required
  #define LEFT_ENC_PIN_A 2  
  #define LEFT_ENC_PIN_B 7  
  
  //below can be changed, but should be PORTC pins
  #define RIGHT_ENC_PIN_A 16
  #define RIGHT_ENC_PIN_B 17
#endif
   
long readEncoder(int i);
void resetEncoder(int i);
void resetEncoders();

