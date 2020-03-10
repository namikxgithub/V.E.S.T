//place the positive of the battery to A0 of arduino
//place the negitive of the battery to GND of arduino

#define bat A3 


void setup() {

  Serial.begin(9600); 
  
  pinMode(bat, INPUT);

}

void loop() {

  float red   = analogRead(bat);
  
  float volt = (red / 1023) * 100;
  
  Serial.print("voltage = ");
  
  Serial.println((volt));
  
  delay(500);
  

}
