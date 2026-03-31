int voltPin = A2;
int bluePin = 7;
int yellowPin = 8;
int redPin = 9;
int readVal;
float V2;
int delayTime = 250;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(voltPin, INPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  readVal =analogRead(voltPin);
  V2 = (5./1023.) * readVal;
  Serial.print("Potentiometer voltage is ");
  Serial.println(V2);
  if(V2 < 3.0){
    digitalWrite(bluePin,HIGH);
    digitalWrite(yellowPin,LOW);
    digitalWrite(redPin,LOW);
  }
  if(V2 >= 3.0 && V2 <= 4.0){
      digitalWrite(bluePin,LOW);
     digitalWrite(yellowPin,HIGH);
     digitalWrite(redPin,LOW);
  }
  if(V2 > 4.0 ){
    digitalWrite(bluePin,LOW);
    digitalWrite(yellowPin,LOW);
    digitalWrite(redPin,HIGH);
  }

  delay(delayTime);

}
