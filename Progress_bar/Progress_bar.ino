int Rd=(0);
int Bl=(1);
int Gr=(2);
int Yl=(3);
int Br=(4);
int Vi=(5);



void setup(){
   pinMode(Rd,OUTPUT);
   pinMode(Bl,OUTPUT);
   pinMode(Gr,OUTPUT);
   pinMode(Yl,OUTPUT);
   pinMode(Br,OUTPUT);
   pinMode(Vi,OUTPUT);
}

void loop(){
   digitalWrite(Rd,HIGH);
    delay(100);
   digitalWrite(Bl,HIGH);
    delay(100);
   digitalWrite(Gr,HIGH);
    delay(100);
   digitalWrite(Yl,HIGH);
    delay(100);
   digitalWrite(Br,HIGH);
    delay(100);
   digitalWrite(Vi,HIGH);
    delay(100);
   
   digitalWrite(Vi,LOW);
    delay(100);
   digitalWrite(Br,LOW);
    delay(100);
   digitalWrite(Yl,LOW);
    delay(100);
   digitalWrite(Gr,LOW);
    delay(100);
   digitalWrite(Bl,LOW);
    delay(100);
   digitalWrite(Rd,LOW);
    delay(100);
}

