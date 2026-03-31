int redLED = 9;
int time = 5000;
int bright = 50;
int brighter = 155;
int brightest = 225;



void setup() {
  // put your setup code here, to run once:
  pinMode(redLED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  analogWrite(redLED,bright);
  delay(time);

  analogWrite(redLED,brighter);
  delay(time);

  analogWrite(redLED,brightest);
  delay(time);



  

}
