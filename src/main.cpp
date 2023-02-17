#include <Arduino.h>
#include "droit.hpp"
#include "croise.hpp"


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

void setup(){
  pinMode(bran_In1, INPUT);
  pinMode(bran_In2, INPUT);
  pinMode(bran_In3, INPUT);
  pinMode(bran_In4, INPUT);
  pinMode(bran_In5, INPUT);
  pinMode(bran_In6, INPUT);
  pinMode(bran_In7, INPUT);
  pinMode(bran_In8, INPUT);

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
void loop(){

  digitalWrite(bran_out1, HIGH);

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
    }else{
          Serial.print("Cable non fonctionnel");
        }
        Serial.println("Cable droit");
  }
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
    }else{
          Serial.print("Cable non fonctionnel");
        }
        Serial.println("Cable croisé");
  }
  else 
  Serial.print("Cable non fonctionnel");

}