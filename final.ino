int fsrReading;
int fsrReading2;
int fsrReading3;
int counter = 0;

void setup() {
  pinMode(13, OUTPUT);
  
  
  Serial.begin(9600);
}

void loop() {
digitalWrite(13, LOW);
  
  fsrReading = analogRead(0);
  fsrReading2 = analogRead(1);
  fsrReading3 = analogRead(2);
  Serial.print("Sekunde: ");
  Serial.println(counter);
  Serial.print("Wert: ");
  Serial.println(fsrReading);
  Serial.print("Wert2: ");
  Serial.println(fsrReading2);
  Serial.print("Wert3: ");
  Serial.println(fsrReading3);

  counter++;
  
  delay(500);

}
