/************************************************************************************************************************
**                                                                                                                     ** 
**                                                      Serial 2.4                                                     ** 
**                 Quan carreguem el programa ves apareix una divisió de dos nombres en sistema decimal                **
**                                                                                                                     **
**                                                                                                                     **                                                                                                        
************************************************************************************************************************/

//*********** Includes  ********************************************************************************



//***********  Variables  *******************************************************************************
int a = 3;
int b = 2;
int d;

//***********  Setup  ************************************************************************************
void setup() {
  Serial.begin(9600);
  
  Serial.println("Here is division: ");
  
  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  
  d = a / b;
  
  Serial.print("a / b = ");
  Serial.println(d);
                  
}

//***********  Loop  **************************************************************************************
void loop() {
  
}
