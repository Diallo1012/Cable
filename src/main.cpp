#include <Arduino.h>
#include "droit.hpp"

// Pour les entrées INPUT
int bran_In1 = 13;
int bran_In2 = 12;
int bran_In3 = 11;
int bran_In4 = 10;
int bran_In5 = 9;
int bran_In6 = 8;
int bran_In7 = 7;
int bran_In8 = 6;

// Pour les sorties OUTPUT
int bran_out1 = 5;
int bran_out2 = 4;
int bran_out3 = 3;
int bran_out4 = 2;
int bran_out5 = 1;
int bran_out6 = A6;
int bran_out7 = A5;
int bran_out8 = A4;

// declaration des objets

//Droit droit1;
//Croise croise1;

void setup()
{
  // Instantiation de l'objet
  Droit droit1;

  //appelle des fonctions de la classe
  droit1.envoie_droit();
  droit1.recoit_droit();
}
void loop()
{

  digitalWrite(bran_out1, HIGH);

  // Si la broche d'entrée est connectée à la broche de sortie
  // ensemble alors le cable est droit (bran_In1 = bran_out1, bran_In2 = bran_out2, ...)
  if (digitalRead(bran_In1) == HIGH)
  {
    digitalWrite(bran_out1, LOW);
    digitalWrite(bran_out2, HIGH);
    if (digitalRead(bran_In2) == HIGH)
    {
      digitalWrite(bran_out2, LOW);
      digitalWrite(bran_out3, HIGH);
      if (digitalRead(bran_In3) == HIGH)
      {
        digitalWrite(bran_out3, LOW);
        digitalWrite(bran_out4, HIGH);
        if (digitalRead(bran_In4) == HIGH)
        {
          digitalWrite(bran_out4, LOW);
          digitalWrite(bran_out5, HIGH);
          if (digitalRead(bran_In5) == HIGH)
          {
            digitalWrite(bran_out5, LOW);
            digitalWrite(bran_out6, HIGH);
            if (digitalRead(bran_In6) == HIGH)
            {
              digitalWrite(bran_out6, LOW);
              digitalWrite(bran_out7, HIGH);
              if (digitalRead(bran_In7) == HIGH)
              {
                digitalWrite(bran_out7, LOW);
                digitalWrite(bran_out8, HIGH);
                if (digitalRead(bran_In8) == HIGH)
                {
                  digitalWrite(bran_out8, LOW);
                }

                // Si la prémière condition n'est pas vérifiée alors non fonctionnel
                else
                {
                  Serial.print("Cable non fonctionnel");
                }
              }
              else
              {
                Serial.print("Cable non fonctionnel");
              }
            }
            else
            {
              Serial.print("Cable non fonctionnel");
            }
          }
          else
          {
            Serial.print("Cable non fonctionnel");
          }
        }
        else
        {
          Serial.print("Cable non fonctionnel");
        }
      }
      else
      {
        Serial.print("Cable non fonctionnel");
      }
    }
    else
    {
      Serial.print("Cable non fonctionnel");
    }
    Serial.println("Cable droit");
  }
  // Si la broche d'entrée est connectée à la broche de sortie
  // ensemble alors le cable est croisé (bran_In1 = bran_out3, bran_In2 = bran_out6, bran_In3 = bran_out1, ...)
  else if (digitalRead(bran_In3) == HIGH)
  {
    digitalWrite(bran_out1, LOW);
    digitalWrite(bran_out2, HIGH);
    if (digitalRead(bran_In6) == HIGH)
    {
      digitalWrite(bran_out2, LOW);
      digitalWrite(bran_out3, HIGH);
      if (digitalRead(bran_In3) == HIGH)
      {
        digitalWrite(bran_out3, LOW);
        digitalWrite(bran_out1, HIGH);
        if (digitalRead(bran_In4) == HIGH)
        {
          digitalWrite(bran_out4, LOW);
          digitalWrite(bran_out4, HIGH);
          if (digitalRead(bran_In5) == HIGH)
          {
            digitalWrite(bran_out5, LOW);
            digitalWrite(bran_out5, HIGH);
            if (digitalRead(bran_In6) == HIGH)
            {
              digitalWrite(bran_out6, LOW);
              digitalWrite(bran_out2, HIGH);
              if (digitalRead(bran_In7) == HIGH)
              {
                digitalWrite(bran_out7, LOW);
                digitalWrite(bran_out8, HIGH);
                if (digitalRead(bran_In8) == HIGH)
                {
                  digitalWrite(bran_out8, LOW);
                }
                else
                {
                  Serial.print("Cable non fonctionnel");
                }
              }
              else
              {
                Serial.print("Cable non fonctionnel");
              }
            }
            else
            {
              Serial.print("Cable non fonctionnel");
            }
          }
          else
          {
            Serial.print("Cable non fonctionnel");
          }
        }
        else
        {
          Serial.print("Cable non fonctionnel");
        }
      }
      else
      {
        Serial.print("Cable non fonctionnel");
      }
    }
    else
    {
      Serial.print("Cable non fonctionnel");
    }
    Serial.println("Cable croisé");
  }
  else
    Serial.print("Cable non fonctionnel");
  delay(1000);
}