/*
 Titre : blink2
 */

// Déclaration de variables globales

int led1=12; // numéro de la pin ou est connectée la led 12
int led2=13; // numéro de la pin ou est connectée la led 13
int bp=2; // numéro de la pin ou est connectée le bouton poussoir

// déclaration des constantes

// setup

void setup() {
  pinMode(led1,OUTPUT); // configure la pin 12 en sortie
  pinMode(led2,OUTPUT); // configure la pin 13 en sortie
  pinMode(bp,INPUT); // configure la pin 2 en entrée

}

// programme

void loop() {

if (digitalRead(bp)== HIGH ){ // lis le bouton poussoir
   digitalWrite(led1,LOW); // éteint la led1 
   digitalWrite(led2,HIGH); // allume la led2
}

else {
  digitalWrite(led1,HIGH); // allume la led1
  digitalWrite(led2,LOW); // éteint la led2
}

}
