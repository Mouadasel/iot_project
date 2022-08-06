#include <Arduino.h>
#include<DHT.h>
#include<DHT_U.h>



int red=14;
int green=26;
int bleu=13;


void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(bleu,OUTPUT);
Serial.begin(9600);
Serial.print("setup\n");
}

void loop() {
  Serial.print("loop\n");

  // put your main code here, to run repeatedly:
digitalWrite(red,HIGH);
digitalWrite(bleu,LOW);
delay(3000);
digitalWrite(green,HIGH);
digitalWrite(red,LOW);
delay(3000);
digitalWrite(bleu,HIGH);
digitalWrite(green,LOW);
delay(1000);
}