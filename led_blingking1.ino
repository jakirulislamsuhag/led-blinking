int green = 13;
int yellow = 12;
int orange = 11;
int blue   = 10;
int red = 9;
int white = 8;
  
void setup()
{
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(orange, OUTPUT);  
  pinMode(blue, OUTPUT);  
  pinMode(red, OUTPUT);
  pinMode(white, OUTPUT);
}

void loop()
{
  // led turn on funtion
  digitalWrite(green, HIGH);
  digitalWrite(white, HIGH);
  delay(1500); 
  
  digitalWrite(yellow, HIGH);
  digitalWrite(red, HIGH);
  delay(1500);
  
  digitalWrite(orange, HIGH);
  digitalWrite(blue, HIGH);
  delay(1500);   
  
  // led turn of funtion
  
  digitalWrite(orange, LOW);
  digitalWrite(blue, LOW);
  delay(1500);  
  
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
  delay(1500);
  
  digitalWrite(green, LOW);
  digitalWrite(white, LOW);
  delay(1500);
  
  //2nd time led turn on funtion
  digitalWrite(orange, HIGH);
  digitalWrite(blue, HIGH);
  delay(1500);
  
  digitalWrite(yellow, HIGH);
  digitalWrite(red, HIGH);
  delay(1500);
  
  digitalWrite(green, HIGH);
  digitalWrite(white, HIGH);
  delay(1500);   
  
  //2nd time led turn of funtion
  digitalWrite(green, LOW);
  digitalWrite(white, LOW);
  delay(1500); 
  
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
  delay(1500);
  
  digitalWrite(orange, LOW);
  digitalWrite(blue, LOW);
  delay(1500); 
}