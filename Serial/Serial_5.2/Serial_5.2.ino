/************************************************************************************************************************
**                                                                                                                     ** 
**                                                      Serial 5.2                                                     ** 
**                                                                                                                     **
**                                                                                                                     **
**                                                                                                                     **                                                                                                        
************************************************************************************************************************/

/*********** Includes  ***********************************************************/



//***********  Variables  *********************************************************
float numParell, numSenar;        
float resParell, resSenar;

//***********  Setup  *************************************************************
void setup() {
 Serial.begin(9600); // initialize serial
 Serial.print("Entrar un numero, ");
}


//***********  Loop  **************************************************************
void loop() {
 while (Serial.available() > 0) { 

    numParell = Serial.parseInt();
    Serial.print("el ");
    Serial.print(numParell);
    Serial.print(" es parell."); 

    numSenar = Serial.parseInt();
    Serial.print("el ");
    Serial.print(numSenar);
    Serial.println(" es senar.");
    
    if (Serial.read() == '\n') {                    
      
    numParell / 2;
    numSenar / 3;                    

    Serial.print("el ");
    Serial.print(numParell);
    Serial.print(" es parell."); 

    Serial.print("el ");
    Serial.print(numSenar);
    Serial.println(" es senar.");
    
    Serial.print("Entrar un nou mumero, ");
    }
  } 
}

