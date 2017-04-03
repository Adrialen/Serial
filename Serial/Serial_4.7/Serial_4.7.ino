/************************************************************************************************************************
**                                                                                                                     ** 
**                                                      Serial 4.7                                                     ** 
**      Quan confeccionem el program acreem una variable amb el nom i, i li diem que si es més petit o igual a una     **
**      variable designada anteriorment ens afageixi un guionet i sumi 1 a la i. Si i és més gran que 11, ja no ens    **
**      afegirà el guionet ni ens sumarà el nombre.                                                                    **                                                 
**                                                                                                                     **
************************************************************************************************************************/

//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
int comptar = 11;

//********** SETUP ****************************************************************
void setup() {                            
  Serial.begin(9600);                      
  Serial.print("Ara comptare de 0 a ");   
  Serial.println(comptar);                
  for (int i=0; i <= comptar; i++)        
 
  {
    if ( i < 11 )            
    {
      Serial.print(i);       
      Serial.print("-");     
    }
    else if ( i >= 11 )       
    {
      Serial.print(i);        
    }
  }
}

//********** LOOP *****************************************************************
void loop() {                            
}
