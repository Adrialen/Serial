/************************************************************************************************************************
**                                                                                                                     ** 
**                                                      Serial 5.4                                                     ** 
**                                                                                                                     **
**                                                                                                                     **
**                                                                                                                     **                                                 
**                                                                                                                     **
************************************************************************************************************************/

//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
int hores;
int salari;
int salaribo;
    
//********** SETUP ****************************************************************
void setup() 
{                        
  Serial.begin(9600);    
  Serial.println ("Quantes hores treballes?");
  
}
//********** LOOP *****************************************************************
 void loop ()
 {                       
   while (Serial.available() > 0) { 
    hores = Serial.parseFloat(); 
    Serial.print ("El salari per "); 
    Serial.print (hores);          
    if (hores < 38)                 
      {
      salari = hores * 20; 
      Serial.print (" hores treballades es de ");    
                          
      }     

    else if (hores > 38)           
      {
      salari = hores * (20*1.5);
      Serial.print (" hores treballades es de ");    
                          
      }

    if (salari <= 800)            
      {
      salaribo = salari - (salari * 0.05);
      Serial.print (salaribo);    
      Serial.println (" Euros");    
      }

    else if (salari > 800)          
      {
      salaribo = salari - (salari * 0.1);
      Serial.print (salaribo);      
      Serial.println (" Euros");   
      }
    
    if (Serial.read() == '\n')
    Serial.println (" ");          
    Serial.println ("Quantes hores treballes?");   
                         
  }
 }

