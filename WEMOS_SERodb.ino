// the setup function runs once when you press reset or power the board
void setup()
{
  // Serial port setup
  while (!Serial);
  Serial.begin(9600);

  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{

  digitalWrite(LED_BUILTIN, HIGH);   // Arduino: turn the LED on (HIGH)
  // D1 Mini: turns the LED *off*
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // Arduino: turn the LED off (LOW)
  // D1 Mini: turns the LED *on*
  delay(2);                       // wait for a second

} //koniec LOOP

// **********************************************************************************
void serialEvent()                  //fajna funkcja uaktywnia sie jak cos wejdzie do bufora serial
{
  digitalWrite(LED_BUILTIN, LOW);    // Arduino: turn the LED off (LOW)
  // D1 Mini: turns the LED *on*


  while (Serial.available())        // dopoki cos jest w buforze to odczytuje po znaku i drukuje na serial
  {
    // char znak = (char)Serial.read();  //odczyt kodu znaku
    char znak = Serial.read();
    Serial.print(znak); //Wydruk
  }

  digitalWrite(LED_BUILTIN, HIGH);   // Arduino: turn the LED on (HIGH)
  // D1 Mini: turns the LED *off*

} // KONIEC serialEvent
