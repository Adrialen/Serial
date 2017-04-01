/************************************************************************************************************************
**                                                                                                                     ** 
**                                                      Serial 4.3                                                     ** 
**             Quan carreguem el programa podem variar la temperatura de l'aigua per sota de 90 i fins a sobre         **
**             de 100. Si l'aigua està a més de 90, el programa ens dirà que encara no bull. Si està entre 90 i        **
**             100 el programa ens dirà que l'aigua està a punt de bullir. Si està a 100 graus ens dirà                **                                                 
**             "aigua a 100C". Si passa els 100 graus ens dirà que l'aigua bull. per aconseguir això usem if           **
**             i else if.                                                                                              **
**                                                                                                                      **
************************************************************************************************************************/

//*********** Includes  ***********************************************************



//***********  Variables  *********************************************************
int tempAigua = 100;


//***********  Setup  *************************************************************
void setup() {
  Serial.begin(9600); 
  if ( tempAigua < 90)
  {
    Serial.print("Aigua encara no bull");
  }
  else if ( tempAigua >= 90 & tempAigua < 100)
  {
    Serial.print("Aigua apunt de bullir");
  }
  else if ( tempAigua > 100)
  {
    Serial.print("Aigua bullint");
  }
  else
  {
    Serial.print("Aigua a 100C");
  }
}


//***********  Loop  **************************************************************
void loop() {
 
  
}
