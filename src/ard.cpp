// C++ code
#define BOT1 6
#define LED2 A5

void setup()
{
  pinMode(BOT1, INPUT_PULLUP);
  pinMode(LED2, OUTPUT);
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
  Serial.write(!digitalRead(BOT1));
}

void write()
{
  if(Serial.available()) {
    char dados = Serial.read();
    digitalWrite(LED2, dados);
  }
}
