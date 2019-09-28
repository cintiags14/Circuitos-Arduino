int verde = 11;
int azul = 12;
int vermelho = 13;

void setup () {
  pinMode (verde, OUTPUT);
  pinMode (azul, OUTPUT);
  pinMode (vermelho, OUTPUT);  
}

void loop() {
  bool valor1[4]={false, false, true, true};
  bool valor2[4]={false, true, false, true};

  for (int i=0; i<4; i++) {
    digitalWrite(azul, valor1[i]);
    digitalWrite(vermelho, valor2[i]);
    digitalWrite(verde, andPorta(valor1[i], valor2[i]));
    delay(1500);
  }
  
  for (int i=0; i<4; i++) {
    digitalWrite(azul, valor1[i]);
    digitalWrite(vermelho, valor2[i]);
    digitalWrite(verde, or_p(valor1[i], valor2[i]));
    delay(1500);
  }
  
  for (int i=0; i<4; i++) {
    digitalWrite(azul, valor1[i]);
    digitalWrite(vermelho, valor2[i]);
    digitalWrite(verde, nor_p(valor1[i], valor2[i]));
    delay(1500);
  }
  
  for (int i=0; i<4; i++) {
    digitalWrite(azul, valor1[i]);
    digitalWrite(vermelho, valor2[i]);
    digitalWrite(verde, xor_p(valor1[i], valor2[i]));
    delay(1500);
  }
  
  for (int i=0; i<4; i++) {
    digitalWrite(azul, valor1[i]);
    digitalWrite(vermelho, valor2[i]);
    digitalWrite(verde, xnor_p(valor1[i], valor2[i]));
    delay(1500);
  }
}

bool andPorta(bool x, bool y) {
  if (x && y){
  	return HIGH;
  }
  else{
    return LOW;
  }
}

bool or_p(bool x, bool y) {
  if (x || y){
    	return HIGH;
  }
  else{
    return LOW;
  }
}

bool nand_p(bool x, bool y) {
  if (!(x && y)){
      	return HIGH;
  }
  else{
    return LOW;
  }
}

bool nor_p(bool x, bool y) {
  if (!(x || y)){
       	return HIGH;
  }
  else{
    return LOW;
  }
}

bool xor_p(bool x, bool y) {
  if (!x && y || x && !y){
        	return HIGH;
  }
  else{
    return LOW;
  }
}

bool xnor_p(bool x, bool y) {
  if (!(!x && y || x && !y)){
        	return HIGH;
  }
  else{
    return LOW;
  }
}