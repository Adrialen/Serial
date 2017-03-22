/************************************************************************************************************************
**                                                                                                                     ** 
**                                                      Serial 5.3                                                     ** 
**                                                                                                                     **
**                                                                                                                     **
**                                                                                                                     **                                                                                                        
************************************************************************************************************************/

//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
int n1;           

//********** SETUP ****************************************************************
void setup() 
{                         // S'executa un sol cop
  Serial.begin(9600);     // Configura una biblioteca a 9600 bpm
  Serial.println ("Entra un numero");   // Escriu  (Entra un numero)
  
}
//********** LOOP *****************************************************************
 void loop ()
 {
   while (Serial.available() > 0) {      // Llegeix els números del Serial
    n1 = Serial.parseFloat(); 
    Serial.print ("El numero ");         // Escriu a una nova línia (El numero )
    Serial.print (n1);                   // Escriu el valor de "n1"
    if (n1 / 10 == 0)            // Si divideixes entre 10 n1 i dona 0 ...
      {
      Serial.println (" te 1 xifra");    // Escriu ( te 1 xifra)
      }     
    else if (n1 / 100 == 0)      // Si fas n1 entre 100 i dona 0 ...
      {   
      Serial.println (" te 2 xifres");   // Escriu ( te 2 xifres)
      }
    else if (n1 / 1000 == 0)     // Si fas n1 entre 1000 i dona 0 ...
      {
      Serial.println (" te 3 xifres");   // Escriu ( te 3 xifres)
      }
    else if (n1 / 10000 == 0)    // Si fas n1 entre 10000 i dona 0 ...
      {
      Serial.println (" te 4 xifres");   // Escriu ( te 4 xifres)
      }
    else if (n1 / 100000 == 0)   // Si fas n1 100000 i dona 0 ...
      {
      Serial.println (" te 5 xifres");   // Escriu ( te 5 xifres)
      }
    else if (n1 / 1000000 == 0)  // Si fas n1 entre 1000000 i dona 0 ...
      {
      Serial.println (" te 6 xifres");   // Escriu ( te 6 xifres)
      }
      
    if (Serial.read() == '\n')
    Serial.println (" ");                       // Escriu ( )
    Serial.println ("Entra un altre numero");   
                          // Escriu a la següent linia (Entra un altre numero)
  }
 }

