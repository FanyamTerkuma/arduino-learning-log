
int numBlinks;
int redLED = 13;
int dt =500;
String msg="How Many Blinks Do You Want: ";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redLED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while( Serial.available() == 0){
  
  }
  String input = Serial.readStringUntil('\n');
  input.trim(); // removes \r, spaces, etc.
  numBlinks = input.toInt();
for(int j = 1; j <= numBlinks; j = j + 1){
  digitalWrite(redLED,HIGH);
  delay(dt);
  digitalWrite(redLED,LOW);
  delay(dt);

}

}
