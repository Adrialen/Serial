/************************************************************************************************************************
**                                                                                                                     ** 
**                                                      Serial 4.6                                                     ** 
**      Quan confeccionem el program acreem una variable amb el nom i, i li diem que si es més petit o igual a una     **
**      variable designada anteriorment sumi 1 a la i..                                                                **
**                                                                                                                     **                                                 
**                                                                                                                     **
************************************************************************************************************************/

//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
int comptar = 11;

//********** SETUP ****************************************************************
void setup() {                            // S'executa un sol cop
  Serial.begin(9600);                     // Configura una biblioteca a 9600 bpm 
  Serial.print("Ara comptare de 0 a ");   // Escriu ( Ara comptare de 0 a  )
  Serial.println(comptar);                // Escriu el valor de "comptar"
  for (int i=0; i <= comptar; i++)        
  /* Creem una variable amb el nom ( i ), i li diem que si és menor o igual a 
  "comptar" sumi 1 a " i " */
  {
    Serial.print(i);        // Escriu el valor de "i"
    Serial.print("-");      // Escriu ( - )
  }
}

//********** LOOP *****************************************************************
void loop() {                             // S'executa repetidament
}
