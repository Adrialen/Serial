/************************************************************************************************************************
**                                                                                                                     ** 
**                                                      Serial 5.5                                                     ** 
**                                                                                                                     **
**                                                                                                                     **
**                                                                                                                     **                                                 
**                                                                                                                     **
************************************************************************************************************************/
//********** VARIABLES ************************************************************
int mida;

//********** SETUP ****************************************************************
void setup() 
{                        
  Serial.begin(9600);     
  Serial.println ("Quina mida te el cargol en cm?"); 
  
}
//********** LOOP *****************************************************************
 void loop ()
 {                        
   while (Serial.available() > 0) { 
    mida = Serial.parseFloat(); 

    
    if (mida >= 1 & mida < 3)                
      {
      Serial.print ("El cargol amb una mida de "); 
      Serial.print (mida);   
      Serial.println (" cm es petit.");
      Serial.println (" ");
      }     
    if (mida >= 3 & mida < 5)                
      {
      Serial.print ("El cargol amb una mida de "); 
      Serial.print (mida);    
      Serial.println (" cm es mitja.");
      Serial.println (" ");
      }     
    if (mida >= 5 & mida < 8)                
      {
      Serial.print ("El cargol amb una mida de "); 
      Serial.print (mida);   
      Serial.println (" cm es gran.");
      Serial.println (" ");
      }     
    if (mida >= 8 & mida <= 10)                 
      {
      Serial.print ("El cargol amb una mida de "); 
      Serial.print (mida);  
      Serial.println (" cm es molt gran.");
      Serial.println (" ");
      }     
    if (mida > 10)                  
      {
      Serial.println ("La mida del cargol es incorrecta.");
      Serial.println (" ");
      }     
   }
 }

