/************************************************************************************************************************
**                                                                                                                     ** 
**                                Serial 2.1                                                                           ** 
**       Quan carreguem el programa duuem a terme les següents operacions matemàtiques                                 **
**                    Suma                                                                                            **                                    
**                    Resta                                                                                           **
**                    Multiplicació                                                                                   **
**                    Divisió                                                                                         **
**                    Mòdul                                                                                           **               
**                                                                                                                     **                                                                               
**                                                                                                                     **                                                                                                        
************************************************************************************************************************/

//*********** Includes  ********************************************************************************



//***********  Variables  *******************************************************************************
int a = 5;
int b = 10;
int c = 20;

//***********  Setup  ************************************************************************************
void setup() {
  Serial.begin(9600);
  
  Serial.println("Here is some math: ");
  
  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a + b = ");  // Suma
  Serial.println(a + b);
  
  Serial.print("a * c = "); // Multiplicació
  Serial.println(a * c);
  
  Serial.print("c / b = "); // Divisió
  Serial.println(c / b);
  
  Serial.print("c % b = "); // Mòdul
  Serial.println(c % b);
  
  Serial.print("b - c = "); // Resta
  Serial.println(b - c);
                   
 
}

//***********  Loop  **************************************************************************************
void loop() {
  
}
