/************************************************************************************************************************
**                                                                                                                     ** 
**                                                      Serial 3.1                                                     ** 
**                 Quan carreguem el programa vveiem el 64 de 5 maneres diferents. Això és degut a que estem           **
**                 usant 5 llengüatges diferents per expressar-nos.                                                    **
**                                                                                                                     **                                                                                                        
************************************************************************************************************************/

//*********** Includes  ***********************************************************



//***********  Variables  *********************************************************
int num = 64;


//***********  Setup  *************************************************************
void setup() {
   Serial.begin(9600); 
   
   Serial.println("Different formats for the same number:");
   
   Serial.write(num);
   Serial.println();
   
   Serial.println(num);
   Serial.println(num,DEC);
   
   Serial.println(num,BIN);
   
   Serial.println(num,HEX);
   
   Serial.println(num,OCT); 
}


//***********  Loop  **************************************************************
void loop() {
  
}

