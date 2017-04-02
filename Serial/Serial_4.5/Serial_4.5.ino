/************************************************************************************************************************
**                                                                                                                     ** 
**                                                      Serial 4.5                                                     ** 
**      Quan carreguem el programa podem seleccionar un cas determinat, i en fució del que triem ens dirà una frase    **
**      o una altra. Això ho aconseguim substituint if i else if, per switch.                                          **
**                                                                                                                     **                                                 
**                                                                                                                     **
************************************************************************************************************************/

//*********** Includes  ***********************************************************



//***********  Variables  *********************************************************
int sensorReading = 0;


//***********  Setup  *************************************************************
void setup() {
  Serial.begin(9600);
  Serial.print("The day is ");
  
  switch (sensorReading) {
  case 0:
    Serial.println("dark");
    break;
  case 1:
    Serial.println("dim");
    break;
  case 2:
    Serial.println("medium");
    break;
  case 3:
    Serial.println("bright");
    break;
  default:
    Serial.println("... I don't know!!!");
  }
}


//***********  Loop  **************************************************************
void loop() {
 
  
}

