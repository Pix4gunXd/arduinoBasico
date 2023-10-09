// C++ code
//
int time = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);

  time = 1000;
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(time); // Wait for time millisecond(s)
  digitalWrite(13, LOW);
  delay(time); // Wait for time millisecond(s)
  digitalWrite(12, HIGH);
  delay(time); // Wait for time millisecond(s)
  digitalWrite(12, LOW);
}