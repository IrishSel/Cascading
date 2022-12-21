#define ledpin_2 3
#define ledpin_3 4
#define ledpin_4 5
#define ledpin_5 6
#define ledpin_6 7
#define ledpin_7 8
#define ledpin_8 9
#define ledpin_9 12

void LOW()
{
  digitalWrite(ledpin_2, LOW);
  digitalWrite(ledpin_3, LOW);
  digitalWrite(ledpin_4, LOW);
  digitalWrite(ledpin_5, LOW);
  digitalWrite(ledpin_6, LOW);
  digitalWrite(ledpin_7, LOW);
  digitalWrite(ledpin_8, LOW);
  digitalWrite(ledpin_9, LOW);
}

void setup() 
{ 
  Serial.begin(9600);
 
  while (!Serial) { } 

  pinMode(ledpin_2, OUTPUT);
  pinMode(ledpin_3, OUTPUT);
  pinMode(ledpin_4, OUTPUT);
  pinMode(ledpin_5, OUTPUT);
  pinMode(ledpin_6, OUTPUT);
  pinMode(ledpin_7, OUTPUT);
  pinMode(ledpin_8, OUTPUT);
  pinMode(ledpin_9, OUTPUT);
}

int second_segment;

void loop() 
{
  if (Serial.available() > 0)
  {
    LOW();
    second_segment = Serial.read() - '0';

    if (second_segment == 1)
    {
      digitalWrite(ledpin_9, HIGH);
      digitalWrite(ledpin_4, HIGH);
    }
    else if (second_segment == 2)
    {
      digitalWrite(ledpin_2, HIGH);
      digitalWrite(ledpin_3, HIGH);
      digitalWrite(ledpin_7, HIGH);
      digitalWrite(ledpin_8, HIGH);
      digitalWrite(ledpin_9, HIGH);
    }
    else if (second_segment == 3)
    {
      digitalWrite(ledpin_3, HIGH);
      digitalWrite(ledpin_4, HIGH);
      digitalWrite(ledpin_7, HIGH);
      digitalWrite(ledpin_8, HIGH);
      digitalWrite(ledpin_9, HIGH);
    }
    else if (second_segment == 4)
    {
      digitalWrite(ledpin_4, HIGH);
      digitalWrite(ledpin_6, HIGH);
      digitalWrite(ledpin_7, HIGH);
      digitalWrite(ledpin_9, HIGH);
    }
    else if (second_segment == 5)
    {
      digitalWrite(ledpin_3, HIGH);
      digitalWrite(ledpin_4, HIGH);
      digitalWrite(ledpin_6, HIGH);
      digitalWrite(ledpin_7, HIGH);
      digitalWrite(ledpin_8, HIGH);
    }
    else if (second_segment == 6)
    {
      digitalWrite(ledpin_2, HIGH);
      digitalWrite(ledpin_3, HIGH);
      digitalWrite(ledpin_4, HIGH);
      digitalWrite(ledpin_6, HIGH);
      digitalWrite(ledpin_7, HIGH);
      digitalWrite(ledpin_8, HIGH);
    }
    else if (second_segment == 7)
    {
      digitalWrite(ledpin_4, HIGH);
      digitalWrite(ledpin_8, HIGH);
      digitalWrite(ledpin_9, HIGH);
    }
    else if (second_segment == 8)
    {
      digitalWrite(ledpin_2, HIGH);
      digitalWrite(ledpin_3, HIGH);
      digitalWrite(ledpin_4, HIGH);
      digitalWrite(ledpin_6, HIGH);
      digitalWrite(ledpin_7, HIGH);
      digitalWrite(ledpin_8, HIGH);
      digitalWrite(ledpin_9, HIGH);
    }
    else if (second_segment == 9)
    {
      digitalWrite(ledpin_3, HIGH);
      digitalWrite(ledpin_4, HIGH);
      digitalWrite(ledpin_6, HIGH);
      digitalWrite(ledpin_7, HIGH);
      digitalWrite(ledpin_8, HIGH);
      digitalWrite(ledpin_9, HIGH);
    }
    else if (second_segment == 0)
    {
      digitalWrite(ledpin_2, HIGH);
      digitalWrite(ledpin_3, HIGH);
      digitalWrite(ledpin_4, HIGH);
      digitalWrite(ledpin_6, HIGH);
      digitalWrite(ledpin_8, HIGH);
      digitalWrite(ledpin_9, HIGH);
    }
  }
}
