
int redPin = 13;
int yellowPin = 12;
int bluePin = 11;
String myColor;
String msg = "What Color LED? ";



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(yellowPin,OUTPUT);
  pinMode(bluePin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while(Serial.available() == 0){

}
myColor = Serial.readString();
myColor.trim();

  if(myColor == "red"){
    digitalWrite(redPin,HIGH);
    digitalWrite(yellowPin,LOW);
    digitalWrite(bluePin,LOW);

  }

  if(myColor == "yellow"){
    digitalWrite(redPin,LOW);
    digitalWrite(yellowPin,HIGH);
    digitalWrite(bluePin,LOW);

  }

  if(myColor == "blue"){
    digitalWrite(redPin,LOW);
    digitalWrite(yellowPin,LOW);
    digitalWrite(bluePin,HIGH);

  }

}
