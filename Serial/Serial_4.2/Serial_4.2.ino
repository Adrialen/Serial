/************************************************************************************************************************
**                                                                                                                     ** 
**                                                      Serial 4.2                                                     ** 
**             Quan carreguem el programa podem variar la temperatura de l'aigua per sota i per sobre                  **
**             de 100. Si l'aigua està a més de 100, el programa ens dirà que bull. Si està a menys de 100             **
**             el programa ens dirà que l'aigua no bull. Per aconseguir això fem servir primer un if i després         **                                                 
**             un elese if.                                                                                            **
**                                                                                                                     **
************************************************************************************************************************/

//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
int tempAigua = 99;

//********** SETUP ****************************************************************
void setup() {                
  Serial.begin(9600);        

  if ( tempAigua >= 100 )     
  {
    Serial.print("Aigua bullint"); 
                              
  }
  else if ( tempAigua < 100 ) 
  {
    Serial.print("Aigua encara no bull"); 
  }
}

//********** LOOP *****************************************************************
void loop() {                
}

