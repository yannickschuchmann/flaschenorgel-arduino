String fsrReading;
String fsrReading2;
String fsrReading3;
int counter = 0;

void setup() {
  pinMode(13, OUTPUT);
  
  
  Serial.begin(9600);
}

void loop() {
  digitalWrite(13, LOW);
  
  fsrReading = String(analogRead(0));
  fsrReading2 = String(analogRead(1));
  fsrReading3 = String(analogRead(2));
  Serial.println(fsrReading + "|" + fsrReading2 +  "|" + fsrReading3);

  counter++;
  
  delay(100);

}
