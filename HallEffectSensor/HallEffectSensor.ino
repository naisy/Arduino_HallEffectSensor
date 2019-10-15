const int signal_pin = 12;
byte state = LOW;

void setup()
{
  /** run once, when the sketch starts **/

  // set serial bps
  Serial.begin(9600);

  pinMode(signal_pin, INPUT);

  // read initial pin state
  state = digitalRead(signal_pin);
}

void loop()
{
  /** run loop **/
  state = digitalRead(signal_pin);
  if (state==LOW)
  {
    Serial.println("detect");
  }
  else
  {
    Serial.println("not detect");
  }
  delay(16);
}
