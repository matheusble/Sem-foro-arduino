int buttonState = 0;
int a = 7;
int b = 6;
int c = 5;
int d = 4;
int e = 3;
int f = 2;
int g = 1;

unsigned long tempoAnterior = 0;
unsigned long tempoAtual = 0;
unsigned long tempo = 0;
int button = 0;

void setup ()
{
  //Entradas Display
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  //
  pinMode (13, OUTPUT);//RED1
  pinMode (12, OUTPUT); //YELLOW1
  pinMode (11, OUTPUT);//GREEN1
  pinMode (10, OUTPUT);//RED2
  pinMode (9, OUTPUT);//YELLOW2
  pinMode (8, OUTPUT);//GREEN2
  pinMode(button, INPUT);

}



void loop ()
{

  buttonState = digitalRead(button);
  unsigned long tempoAtual = millis();

  tempo = tempoAtual - tempoAnterior;

  if (digitalRead(button) == LOW)
  {
    if (tempo <= 5000) {

      digitalWrite(9, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
      digitalWrite(8, HIGH);
      buttonState = digitalRead(button);

    }
    if (tempo >= 5000 && tempo <= 8000)  {
      digitalWrite(8, LOW);
      digitalWrite(9, HIGH);
      buttonState = digitalRead(button);

    }
    if (tempo >= 8000 && tempo <= 13000) {
      digitalWrite(13, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH );
      digitalWrite(11, HIGH);
      buttonState = digitalRead(button);

    }
    else if (tempo >= 13000 && tempo <= 16000) {
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      buttonState = digitalRead(button);

    }
    if (tempo > 16000) {
      buttonState = digitalRead(button);
      tempoAnterior = tempoAtual;
    }
  }

  else
  {
    if (tempo >= 1000 && tempo <= 8000) {

      while (digitalRead(button) == HIGH)
      {
        digitalWrite(13, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(9, HIGH);
        delay(3000);
        digitalWrite(13, LOW);
        digitalWrite(12, LOW);
        digitalWrite(11, HIGH);
        digitalWrite(9, LOW);
        digitalWrite(10, HIGH);

        contador();
        
      }

    }

  }
}


void contador() {
  // NÚMERO ZERO
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);

  delay(1000);
  //NÚMERO UM
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);

  delay(1000);

  //NÚMERO DOIS
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);

  delay(1000);

  //NÚMERO TRÊS
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);

  delay(1000);

  //NÚMERO QUATRO
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);

  delay(1000);

  //NÚMERO CINCO
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);

  delay(1000);

  //NÚMERO SEIS
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);

  delay(1000);

  //NÚMERO SETE
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(1000);

  //NÚMERO OITO
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);

  delay(1000);

  //NÚMERO NOVE
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);

  delay(1000);
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  delay(1000);
}
