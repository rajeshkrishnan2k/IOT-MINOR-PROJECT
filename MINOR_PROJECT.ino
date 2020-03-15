int ldrpin=A0; //LDR(INPUT)
//LED(INPUT)
int r=9;
int g=10;
int b=11;

void setup() 
{
Serial.begin(9600);

pinMode(ldrpin,INPUT);

pinMode(r,OUTPUT);
pinMode(g,OUTPUT);
pinMode(b,OUTPUT);
}

void loop() 
{
int l=analogRead(ldrpin);

if(ldrpin>370 && ldrpin<380) //Red Color
{
  analogWrite(r,HIGH);
  analogWrite(g,LOW);
  analogWrite(b,LOW);
}
else
if(ldrpin>490 && ldrpin<500) //Green Color
{
  analogWrite(r,LOW);
  analogWrite(g,HIGH);
  analogWrite(b,LOW);
}
else
if(ldrpin>540 && ldrpin<550) //Blue Color
{
  analogWrite(r,LOW);
  analogWrite(g,LOW);
  analogWrite(b,HIGH);
}
else
{
  analogWrite(r,LOW);
  analogWrite(g,LOW);
  analogWrite(b,LOW);
}

Serial.println(ldrpin);
}
