// PROGRAMAÇÃO DO ARDUINO - XBEE TRANSMISSOR

char buffer[20];
int luminosidade = 0;
int umidade = 0;
const int LM35 = A2;
int temp = 0;
int uv = 0;
int index_uv = 0;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
}

void loop() {
  //LEITURA DOS DADOS
  
  luminosidade = analogRead(A0) / 10.24; //LEITURA LUMINOSIDADE
  luminosidade = 100 - luminosidade;
  
  umidade = analogRead(A1) / 10.24; //LEITURA UMIDADE
  umidade = 100 - umidade;
  
  temp = analogRead(LM35); //LEITURA TEMPERATURA
  temp = int(float(((temp*5)/1023.0/0.010)));
  
  uv = int(float(analogRead(A3))); // LEITURA DO SENSOR UV
  
  //DEFINIÇÃO DO INDEX UV
  if (uv <= 10) {
    index_uv = 0;
  }
  else if (uv <= 46) {
    index_uv = 1;
  }
  else if (uv <= 65) {
    index_uv = 2;
  }
  else if (uv <= 83) {
    index_uv = 3;
  }
  else if (uv <= 103) {
    index_uv = 4;
  }
  else if (uv <= 124) {
    index_uv = 5;
  }
  else if (uv <= 142) {
    index_uv = 6;
  }
  else if (uv <= 162) {
    index_uv = 7;
  }
  else if (uv <= 180) {
    index_uv = 8;
  }
  else if (uv <= 200) {
    index_uv = 9;
  }
  else if (uv <= 221) {
    index_uv = 10;
  }
  else {
    index_uv = 11;
  }
  
// IMPRESSÃO DOS DADOS NA SERIAL  
  sprintf(buffer, "%d %d %d %d %d\n", luminosidade, umidade, temp, uv, index_uv); // LUMINOSIDADE, UMIDADE, TEMPERATURA, LEITURA UV, INDEX UV
  Serial.print(buffer);
  delay(1000);
}
