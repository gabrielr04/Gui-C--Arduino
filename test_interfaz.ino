char c;
String appendSerialData;
void setup() {

  Serial.begin(9600);
  

}

void loop() {
  while(Serial.available()>0)
  {
    c = Serial.read();
    appendSerialData += c;
    }

    if(c == '#')
    {
      Serial.println("Arduino Say>>");
      Serial.println(appendSerialData);
      appendSerialData ="";
      c=0;
      }

}
