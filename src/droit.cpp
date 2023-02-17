#include "droit.hpp"

Droit::Droit()
{
}
void Droit::envoie_droit()
{

    // envoi des broches en entrées
    pinMode(bran_In1, INPUT);
    pinMode(bran_In2, INPUT);
    pinMode(bran_In3, INPUT);
    pinMode(bran_In4, INPUT);
    pinMode(bran_In5, INPUT);
    pinMode(bran_In6, INPUT);
    pinMode(bran_In7, INPUT);
    pinMode(bran_In8, INPUT);
}
void Droit::recoit_droit()
{
    //Les broches en sorties
    pinMode(bran_out1, OUTPUT);
    pinMode(bran_out2, OUTPUT);
    pinMode(bran_out3, OUTPUT);
    pinMode(bran_out3, OUTPUT);
    pinMode(bran_out4, OUTPUT);
    pinMode(bran_out5, OUTPUT);
    pinMode(bran_out6, OUTPUT);
    pinMode(bran_out7, OUTPUT);
    pinMode(bran_out8, OUTPUT);
}