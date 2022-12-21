#include <SoftwareSerial.h> 
SoftwareSerial mySerial(10, 11);

#define led_pin_2 3
#define led_pin_3 4
#define led_pin_4 5
#define led_pin_5 6
#define led_pin_6 7
#define led_pin_7 8
#define led_pin_8 9
#define led_pin_9 12

void low()
{
  digitalWrite(led_pin_2, LOW);
  digitalWrite(led_pin_3, LOW);
  digitalWrite(led_pin_4, LOW);
  digitalWrite(led_pin_5, LOW);
  digitalWrite(led_pin_6, LOW);
  digitalWrite(led_pin_7, LOW);
  digitalWrite(led_pin_8, LOW);
  digitalWrite(led_pin_9, LOW);
}

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600); 
  while (!Serial) { } 
  Serial.println("Begin!");

  pinMode(led_pin_2, OUTPUT);
  pinMode(led_pin_3, OUTPUT);
  pinMode(led_pin_4, OUTPUT);
  pinMode(led_pin_5, OUTPUT);
  pinMode(led_pin_6, OUTPUT);
  pinMode(led_pin_7, OUTPUT);
  pinMode(led_pin_8, OUTPUT);
  pinMode(led_pin_9, OUTPUT);
}

int part_begin;
char part_end;
String number;

void loop() 
{   
  delay(100);
  if (Serial.available() == 2)
  {
    low();

    part_begin = Serial.read() - '0';
    part_end = Serial.read();
    Serial.println(part_begin);
    Serial.println(part_end);

    mySerial.write(part_end);

    if (part_begint == 1)
    {
      digitalWrite(led_pin_9, HIGH);
      digitalWrite(led_pin_4, HIGH);
    }
    else if (part_begin == 2)
    {
      digitalWrite(led_pin_2, HIGH);
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_8, HIGH);
      digitalWrite(led_pin_9, HIGH);
    }
    else if (part_begin == 3)
    {
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_8, HIGH);
      digitalWrite(led_pin_9, HIGH);
    }
    else if (part_begin == 4)
    {
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_9, HIGH);
    }
    else if (part_begin == 5)
    {
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_8, HIGH);
    }
    else if (part_begin == 6)
    {
      digitalWrite(led_pin_2, HIGH);
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_8, HIGH);
    }
    else if (part_begin == 7)
    {
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_8, HIGH);
      digitalWrite(led_pin_9, HIGH);
    }
    else if (part_begin == 8)
    {
      digitalWrite(led_pin_2, HIGH);
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_8, HIGH);
      digitalWrite(led_pin_9, HIGH);
    }
    else if (part_begin == 9)
    {
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_8, HIGH);
      digitalWrite(led_pin_9, HIGH);
    }
    else if (part_begin == 0)
    {
      digitalWrite(led_pin_2, HIGH);
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_8, HIGH);
      digitalWrite(led_pin_9, HIGH);
    }
  }
  else if (Serial.available() == 1)
  {
    low();

    part_begin = 0;
    second_part = Serial.read();
    
    Serial.println(part_begin);
    Serial.println(part_end);

    mySerial.write(part_end);

    if (part_begin == 0)
    {
      digitalWrite(led_pin_2, HIGH);
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_8, HIGH);
      digitalWrite(led_pin_9, HIGH);
    }
  }
}
