#include <Arduino.h>

class Droit
{
private:
    
public:

    // Pour les entrées
    int bran_In1 = 13;
    int bran_In2 = 12;
    int bran_In3 = 11;
    int bran_In4 = 10;
    int bran_In5 = 9;
    int bran_In6 = 8;
    int bran_In7 = 7;
    int bran_In8 = 6;

    // Pour les sorties
    int bran_out1 = 5;
    int bran_out2 = 4;
    int bran_out3 = 3;
    int bran_out4 = 2;
    int bran_out5 = 1;
    int bran_out6 = 21;
    int bran_out7 = 20;
    int bran_out8 = 19;

    // La classe par defaut
    //Droit();
    
    // les fonctions
    void envoie_droit();
    void recoit_droit();
    void retour_droit();
};
