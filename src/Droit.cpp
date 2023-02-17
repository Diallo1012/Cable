#include "droit.hpp"

void Droit::retour_droit()
{
    digitalWrite(bran_out1, HIGH);

  // Si la broche d'entrée est connectée à la broche de sortie
  // ensemble alors le cable est droit (bran_In1 = bran_out1, bran_In2 = bran_out2, ...)
  if (digitalRead(bran_In1) == HIGH)
  {
    digitalWrite(bran_out1, LOW);
    digitalWrite(bran_out2, HIGH);

    Serial.println("Cable droit");
  }else{
    Serial.println("Cable non fonctionnel");
  }
    /*if (digitalRead(bran_In2) == HIGH)
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
              delay(3000);
            }
          }
          else
          {
            Serial.print("Cable non fonctionnel");
            delay(3000);
          }
        }
        else
        {
          Serial.print("Cable non fonctionnel");
          delay(3000);
        }
      }
      else
      {
        Serial.print("Cable non fonctionnel");
        delay(3000);
      }
    }
    else
    {
      Serial.print("Cable non fonctionnel");
      delay(3000);
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
    Serial.print("Cable non fonctionnel");*/
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