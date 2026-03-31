
int yellowLED = 6;
int redLED = 9;
int delayTime = 500;
int yellowBlink = 3;
int redBlink = 5;
int j =  0;


void setup() {
  // put your setup code here, to run once:
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

// Yellow LED
for(j=1; j<= yellowBlink; j = j +1){
  digitalWrite(yellowLED, HIGH);
  delay(delayTime);
  digitalWrite(yellowLED, LOW);
  delay(delayTime);
}

//Red LED

for(j = 1; j <= redBlink; j = j + 1){
  digitalWrite(redLED, HIGH);
  delay(delayTime);
  digitalWrite(redLED, LOW);
  delay(delayTime);
}

}
