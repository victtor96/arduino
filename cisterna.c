void setup() {
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);

  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  
}

void loop() {
  if (digitalRead(0) == LOW){ //Leitura so sinal acionado na base do Transistor 1.
    digitalWrite(8,HIGH);
  }
  else {
    digitalWrite(8,LOW);
  }
  
  if (digitalRead(1) == LOW){ //Leitura so sinal acionado na base do Transistor 2.
    digitalWrite(9,HIGH);
  }
  else {
    digitalWrite(9,LOW);
  }

 if (digitalRead(2) == LOW){ //Leitura so sinal acionado na base do Transistor 3.
    digitalWrite(10,HIGH);
  }
  else {
    digitalWrite(10,LOW);
  }
 
 if (digitalRead(3) == LOW){ //Leitura so sinal acionado na base do Transistor 4.
    digitalWrite(11,HIGH);
  }
  else {
    digitalWrite(11,LOW);
  }


if(digitalRead(0) == LOW && digitalRead(1) == LOW && digitalRead(2) == LOW && digitalRead(3) == LOW){  //Leitura so sinal acionado na base de todos os Transistor. 
  digitalWrite(12,HIGH);
}
else{
 digitalWrite(12,LOW); }

}
