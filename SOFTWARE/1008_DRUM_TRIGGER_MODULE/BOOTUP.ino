void bootup() {
  //bootup provideds a hardware test of the LED's and output triggers.

  
  //Loop thtout the trigger array and flash each LED in sequence
  int x = 0;
  while ( x < 18) {
   digitalWrite(Trigger[x], HIGH);
  delay(20);
  digitalWrite(Trigger[x], LOW);
  delay(10);
  digitalWrite(Trigger[x], HIGH);
  delay(20);
  digitalWrite(Trigger[x], LOW);
  delay(10);
  x++;
  }  
  // Randomly trigger any output until 200 triggers have occured creating a random output.
  while ( x < 200 ) {
  int y = random(18);
  digitalWrite(Trigger[y], HIGH);
  delay(10);
  digitalWrite(Trigger[y], LOW);
  delay(10);
   x++;
  }
  //
}
