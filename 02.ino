const byte LEDs[] = {2,3,4,5,8,9,10,11};
byte index = 0;
int i;
void setup()
{
  for(byte i=0;i<8;i++)
  {
    pinMode(LEDs[i], OUTPUT);
  }
}
void loop()
{
 for(int i=0;i<8;i++)//¥þ«G
 {
   digitalWrite(LEDs[i],HIGH);
 }
delay(200);
  for(int i=0;i<8;i++)//¥þ·t
 {
   digitalWrite(LEDs[i],LOW);
 }
delay(200);
   for(int i=0;i<8;i++)
 {
   digitalWrite(LEDs[i],HIGH);
 }
delay(200);
  for(byte i=0;i<8;i++)
 {
   digitalWrite(LEDs[i],LOW);
 }
delay(200);
   for(int i=0;i<8;i++)
 {
   digitalWrite(LEDs[i],HIGH);
   delay(200);

   digitalWrite(LEDs[i],LOW);


 }

   for(int i=0;i<8;i++)

 {

   digitalWrite(LEDs[i],HIGH);

   delay(200);

   digitalWrite(LEDs[i],LOW);


 }

   for(int i=0;i<8;i++)

 {

   digitalWrite(LEDs[i],HIGH);

   delay(200);

   digitalWrite(LEDs[i],LOW);


   }

 for(int i=0;i<8;i++)

 {

   digitalWrite(LEDs[i],HIGH);

   delay(200);

   digitalWrite(LEDs[i],LOW);



 }

 for(int i=0;i<8;i++)

 {

   digitalWrite(LEDs[i],HIGH);

   delay(200);

   digitalWrite(LEDs[i],LOW);



 } 

     for(int i=0;i<8;i++)

 {

   digitalWrite(LEDs[i],HIGH);

   delay(200);

   digitalWrite(LEDs[i],LOW);



 } 

     for(int i=0;i<8;i++)

 {

   digitalWrite(LEDs[i],HIGH);

   delay(200);

   digitalWrite(LEDs[i],LOW);



 } 

     for(int i=0;i<8;i++)

 {

   digitalWrite(LEDs[i],HIGH);

   delay(200);

   digitalWrite(LEDs[i],LOW);



 } 

   for(int i=0;i<8;i++)

 {

   digitalWrite(LEDs[i],HIGH);

  }

   delay(200);

     for(int i=0;i<8;i++)

 {

   digitalWrite(LEDs[i],LOW);

 } 

     delay(200);

 for(int i=0;i<8;i++)

 {

   digitalWrite(LEDs[i],HIGH);

 } 

     delay(200);

     for(int i=0;i<8;i++)

 {

   digitalWrite(LEDs[i],LOW);

 } 

   delay(200);   

  for(int i=7;i>=0;i--)

 {

   digitalWrite(LEDs[i],HIGH);

   delay(200);

   digitalWrite(LEDs[i],LOW);


 } 

     for(int i=7;i>=0;i--)

 {

   digitalWrite(LEDs[i],HIGH);

   delay(200);

   digitalWrite(LEDs[i],LOW);



 } 

     for(int i=7;i>=0;i--)

 {

   digitalWrite(LEDs[i],HIGH);

   delay(200);

   digitalWrite(LEDs[i],LOW);

   

 }

     for(int i=7;i>=0;i--)

 {

   digitalWrite(LEDs[i],HIGH);

   delay(200);

   digitalWrite(LEDs[i],LOW);


 }

      for(int i=7;i>=0;i--)

 {

   digitalWrite(LEDs[i],HIGH);

   delay(200);

   digitalWrite(LEDs[i],LOW);



 }

      for(int i=7;i>=0;i--)

 {

   digitalWrite(LEDs[i],HIGH);

   delay(200);

   digitalWrite(LEDs[i],LOW);


 }

      for(int i=7;i>=0;i--)

 {

   digitalWrite(LEDs[i],HIGH);

   delay(200);

   digitalWrite(LEDs[i],LOW);



 }

      for(int i=7;i>=0;i--)

 {

   digitalWrite(LEDs[i],HIGH);

   delay(200);

   digitalWrite(LEDs[i],LOW);

 

 }

  delay(200);

}
