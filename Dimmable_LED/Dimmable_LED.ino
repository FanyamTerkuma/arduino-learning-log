int potPin = A2;
int bluePin = 9;
int potVal; 
float LED_Val;


void setup() {
  // put your setup code here, to run once:
  pinMode(potPin,INPUT);
  pinMode(bluePin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  LED_Val = (225./1023.) * potVal;
  analogWrite(bluePin,LED_Val);
  Serial.println(LED_Val);
  

}
