/**********************************************************************************
**                                                                               ** 
**                                     Serial 1.2                                ** 
**                                                                               **
**                                                                               **                                                                               
**                                                                               **                                                                                                        
**********************************************************************************/

//*********** Includes  ***********************************************************



//***********  Variables  *********************************************************



//***********  Setup  *************************************************************
void setup() {
  Serial.begin(9600);                   
 
}

//***********  Loop  **************************************************************
void loop() {
  Serial.print("Hello world!");
  delay(1000);
}
