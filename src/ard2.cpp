// C++ code
//

#define LED1 A0
#define BOT2 7

void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(BOT2, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  read();
  write();

  delay(500);
}

void read()
{
  Serial.write(!digitalRead(BOT2));
}

void write()
{
  if(Serial.available()) {
    char dados = Serial.read();
    digitalWrite(LED1, dados);
  }
}
