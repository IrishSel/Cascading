#include <SoftwareSerial.h> 
SoftwareSerial mySerial(10, 11);

#define ledpin2 3
#define ledpin3 4
#define ledpin4 5
#define ledpin5 6
#define ledpin6 7
#define ledpin7 8
#define ledpin8 9
#define ledpin9 12

void LOW()
{
  digitalWrite(ledpin2, LOW);
  digitalWrite(ledpin3, LOW);
  digitalWrite(ledpin4, LOW);
  digitalWrite(ledpin5, LOW);
  digitalWrite(ledpin6, LOW);
  digitalWrite(ledpin7, LOW);
  digitalWrite(ledpin8, LOW);
  digitalWrite(ledpin9, LOW);
}

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600); 
  while (!Serial) { } 
  Serial.println("Enter");

  pinMode(ledpin2, OUTPUT);
  pinMode(ledpin3, OUTPUT);
  pinMode(ledpin4, OUTPUT);
  pinMode(ledpin5, OUTPUT);
  pinMode(ledpin6, OUTPUT);
  pinMode(ledpin7, OUTPUT);
  pinMode(ledpin8, OUTPUT);
  pinMode(ledpin9, OUTPUT);
}

int first_segment;
char second_segment;
String number;

void loop() 
{   
  delay(100);
  if (Serial.available() == 2)
  {
    LOW();

    first_segment = Serial.read() - '0';
    second_segment = Serial.read();
    Serial.println(first_segment);
    Serial.println(second_segment);

    mySerial.write(second_segment);

    if (first_segment == 1)
    {
      digitalWrite(ledpin9, HIGH);
      digitalWrite(ledpin4, HIGH);
    }
    else if (first_segment == 2)
    {
      digitalWrite(ledpin2, HIGH);
      digitalWrite(ledpin3, HIGH);
      digitalWrite(ledpin7, HIGH);
      digitalWrite(ledpin8, HIGH);
      digitalWrite(ledpin9, HIGH);
    }
    else if (first_segment == 3)
    {
      digitalWrite(ledpin3, HIGH);
      digitalWrite(ledpin4, HIGH);
      digitalWrite(ledpin7, HIGH);
      digitalWrite(ledpin8, HIGH);
      digitalWrite(ledpin9, HIGH);
    }
    else if (first_segment == 4)
    {
      digitalWrite(ledpin4, HIGH);
      digitalWrite(ledpin6, HIGH);
      digitalWrite(ledpin7, HIGH);
      digitalWrite(ledpin9, HIGH);
    }
    else if (first_segment == 5)
    {
      digitalWrite(ledpin3, HIGH);
      digitalWrite(ledpin4, HIGH);
      digitalWrite(ledpin6, HIGH);
      digitalWrite(ledpin7, HIGH);
      digitalWrite(ledpin8, HIGH);
    }
    else if (first_segment == 6)
    {
      digitalWrite(ledpin2, HIGH);
      digitalWrite(ledpin3, HIGH);
      digitalWrite(ledpin4, HIGH);
      digitalWrite(ledpin6, HIGH);
      digitalWrite(ledpin7, HIGH);
      digitalWrite(ledpin8, HIGH);
    }
    else if (first_segment == 7)
    {
      digitalWrite(ledpin4, HIGH);
      digitalWrite(ledpin8, HIGH);
      digitalWrite(ledpin9, HIGH);
    }
    else if (first_segment == 8)
    {
      digitalWrite(ledpin2, HIGH);
      digitalWrite(ledpin3, HIGH);
      digitalWrite(ledpin4, HIGH);
      digitalWrite(ledpin6, HIGH);
      digitalWrite(ledpin7, HIGH);
      digitalWrite(ledpin8, HIGH);
      digitalWrite(ledpin9, HIGH);
    }
    else if (first_segment == 9)
    {
      digitalWrite(ledpin3, HIGH);
      digitalWrite(ledpin4, HIGH);
      digitalWrite(ledpin6, HIGH);
      digitalWrite(ledpin7, HIGH);
      digitalWrite(ledpin8, HIGH);
      digitalWrite(ledpin9, HIGH);
    }
    else if (first_segment == 0)
    {
      digitalWrite(ledpin2, HIGH);
      digitalWrite(ledpin3, HIGH);
      digitalWrite(ledpin4, HIGH);
      digitalWrite(ledpin6, HIGH);
      digitalWrite(ledpin8, HIGH);
      digitalWrite(ledpin9, HIGH);
    }
  }
  else if (Serial.available() == 1)
  {
    LOW();

    first_segment = 0;
    second_segment = Serial.read();
    
    Serial.println(first_segment);
    Serial.println(second_segment);

    mySerial.write(second_segment);
  }
}
