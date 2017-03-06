/**********************************************************************************
**                                                                               ** 
**                                  Serial 1.3                                   ** 
**    Quan carreguem el programa apareix Hello world un cop cada segon,          **
**      pero gràcies al Serial.println cada cop ho fa una linia per sota         **                                                                               
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
  Serial.println("Hello world!");
  delay(1000);
}
