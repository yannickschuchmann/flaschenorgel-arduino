void setup() {
  Serial.begin(9600);
}

String values = "800|100|680";

void loop() {
  String content = "";
  char character;

  while (Serial.available()) {
    character = Serial.read();
    content.concat(character);
  }

  if (content != "") {
    values = content;
  }

  Serial.println(values);

  delay(500);
}
