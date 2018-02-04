const char pins[] = {2, 3, 4, 5, 6, 7};
const int num_segments = 6;

void setup() {
  for (int segment = 0; segment < num_segments; segment++)
    pinMode(pins[segment], OUTPUT);
  
  pinMode(13, OUTPUT);

  all_off();
}

void all_off() {
  for (int segment = 0; segment < num_segments; segment++)
    digitalWrite(pins[segment], LOW);
}

void all_on() {
  for (int segment = 0; segment < num_segments; segment++)
    digitalWrite(pins[segment], HIGH);
}

void loop() {
  sequence();
  sequence();
  all_on();
  for(;;);
}

void sequence() {
  static unsigned long delay_ms = 40;
  
  for (int segment = 0; segment < num_segments; segment++) {
    digitalWrite(pins[segment], HIGH);
    delay(delay_ms);
  }

  for (int segment = 0; segment < num_segments; segment++) {
    digitalWrite(pins[segment], LOW);
    delay(delay_ms);
  }
}
