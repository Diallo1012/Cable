#include <Arduino.h>
#include "Droit.hpp"
Droit droit1;
void setup()
{
  // Instantiation de l'objet


  //appelle des fonctions de la classe
  droit1.envoie_droit();
  droit1.recoit_droit();
}
void loop()
{
    // Droit droit1;     // Instantiation de l'objet avec la classe
    droit1.retour_droit();    // appelle de la fonction
    delay(3000);
}