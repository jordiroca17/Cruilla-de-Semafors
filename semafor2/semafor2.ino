/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ledR1 = 7;
const int ledT1 = 8;
const int ledV1 = 9;

const int ledR2 = 10;
const int ledT2 = 11;
const int ledV2 = 12;


//********** Setup ****************************************************************
void setup()
{
  pinMode(ledR1 ,OUTPUT);
  pinMode(ledT1 ,OUTPUT);
  pinMode(ledV1 ,OUTPUT);
  pinMode(ledR2 ,OUTPUT);
  pinMode(ledT2 ,OUTPUT);
  pinMode(ledV2 ,OUTPUT);
  
 
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(ledR1, HIGH);
  digitalWrite(ledT1, LOW);
  digitalWrite(ledV1, LOW);
  digitalWrite(ledR2, HIGH);
  digitalWrite(ledT2, LOW);
  digitalWrite(ledV2, LOW);
  delay (500);

  digitalWrite(ledR1, HIGH);
  digitalWrite(ledT1, LOW);
  digitalWrite(ledV1, LOW);
  digitalWrite(ledR2, LOW);
  digitalWrite(ledT2, LOW);
  digitalWrite(ledV2, HIGH);
  delay(2000);

  digitalWrite(ledR1, HIGH);
  digitalWrite(ledT1, LOW);
  digitalWrite(ledV1, LOW);
  digitalWrite(ledR2, LOW);
  digitalWrite(ledT2, HIGH);
  digitalWrite(ledV2, LOW);
  delay(500);

  digitalWrite(ledR1, HIGH);
  digitalWrite(ledT1, LOW);
  digitalWrite(ledV1, LOW);
  digitalWrite(ledR2, HIGH);
  digitalWrite(ledT2, LOW);
  digitalWrite(ledV2, LOW);
  delay(500);

  digitalWrite(ledR1, LOW);
  digitalWrite(ledT1, LOW);
  digitalWrite(ledV1, HIGH);
  digitalWrite(ledR2, HIGH);
  digitalWrite(ledT2, LOW);
  digitalWrite(ledV2, LOW);
  delay(2000);

  digitalWrite(ledR1, LOW);
  digitalWrite(ledT1, HIGH);
  digitalWrite(ledV1, LOW);
  digitalWrite(ledR2, HIGH);
  digitalWrite(ledT2, LOW);
  digitalWrite(ledV2, LOW);
  delay(500);



 


  
  
 




  
}


//********** Funcions *************************************************************
