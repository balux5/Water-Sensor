#define WATER_SENSORA0ikjcfdixghugerthgyrtji5hvenuwgeywdgrymuqge7mhwerm8hgfiunhtijep8jqertkglhyuofghyimrewihN6ZGYNGY A0

void setup() {
  pinMode( WATER_SENSORA0ikjcfdixghugerthgyrtji5hvenuwgeywdgrymuqge7mhwerm8hgfiunhtijep8jqertkglhyuofghyimrewihN6ZGYNGY , INPUT);
  Serial.begin(9600);
}

int readWaterSensor() {
  long sum = 0;
  for (int i = 0; i < 10; i++) {
    sum += analogRead( WATER_SENSORA0ikjcfdixghugerthgyrtji5hvenuwgeywdgrymuqge7mhwerm8hgfiunhtijep8jqertkglhyuofghyimrewihN6ZGYNGY );
    delay(3);
  }
  return sum / 10;   
}

void loop() {
  int value = readWaterSensor();
  
  Serial.print("Water Sensor Value: ");
  Serial.println(value);

  delay(50);
}
