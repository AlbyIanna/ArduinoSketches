void setup() {
  Serial.begin(9600);
}

void loop() {
  String r = "";
  while (Serial.available() > 0) {
    r += Serial.readString();
  }
  if(r!="") {
    Serial.println(r);
  }

  int y1 = random(300);
  int y2 = random(200);
  int y3 = random(100);
  int y4 = random(400); 

  Serial.print(y1);
  Serial.print(" ");
  Serial.print(y2);
  Serial.print(" ");
  Serial.print(y3);
  Serial.print(" ");
  Serial.println(y4);

  delay(100);
}
