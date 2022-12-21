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

void setup() 
{ 
  Serial.begin(9600);
 
  while (!Serial) { } 

  pinMode(led_pin_2, OUTPUT);
  pinMode(led_pin_3, OUTPUT);
  pinMode(led_pin_4, OUTPUT);
  pinMode(led_pin_5, OUTPUT);
  pinMode(led_pin_6, OUTPUT);
  pinMode(led_pin_7, OUTPUT);
  pinMode(led_pin_8, OUTPUT);
  pinMode(led_pin_9, OUTPUT);
}

int part_end;

void loop() 
{
  if (Serial.available() > 0)
  {
    low();
    part_end = Serial.read() - '0';

    if (part_end == 1)
    {
      digitalWrite(led_pin_9, HIGH);
      digitalWrite(led_pin_4, HIGH);
    }
    else if (part_end == 2)
    {
      digitalWrite(led_pin_2, HIGH);
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_8, HIGH);
      digitalWrite(led_pin_9, HIGH);
    }
    else if (part_end == 3)
    {
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_8, HIGH);
      digitalWrite(led_pin_9, HIGH);
    }
    else if (part_end == 4)
    {
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_9, HIGH);
    }
    else if (part_end == 5)
    {
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_8, HIGH);
    }
    else if (part_end == 6)
    {
      digitalWrite(led_pin_2, HIGH);
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_8, HIGH);
    }
    else if (part_end == 7)
    {
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_8, HIGH);
      digitalWrite(led_pin_9, HIGH);
    }
    else if (part_end == 8)
    {
      digitalWrite(led_pin_2, HIGH);
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_8, HIGH);
      digitalWrite(led_pin_9, HIGH);
    }
    else if (part_end == 9)
    {
      digitalWrite(led_pin_3, HIGH);
      digitalWrite(led_pin_4, HIGH);
      digitalWrite(led_pin_6, HIGH);
      digitalWrite(led_pin_7, HIGH);
      digitalWrite(led_pin_8, HIGH);
      digitalWrite(led_pin_9, HIGH);
    }
    else if (part_end == 0)
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
