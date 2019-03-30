/*int 
    btr=0,
    btl=1,
    btm=2,
    ledr=3,
    ledl=4,
    ledm=5;


void setup(){
    pinMode(btr,INPUT);
    pinMode(btm,INPUT);
    pinMode(btl,INPUT);
    pinMode(ledl,OUTPUT);
    pinMode(ledr,OUTPUT);
    pinMode(ledm,OUTPUT);
}

void loop(){
    int 
        state1=(digitalRead(btr)),
        state2=(digitalRead(btl)),
        state3=(digitalRead(btm));

/*if    (state1==HIGH){
    digitalWrite(ledr,HIGH),
    delay(1000),
    digitalWrite(ledm,HIGH), 
    dleay(1000),
    digitalWrite(ledl,HIGH),
    delay(1000),
    digitalWrite(ledr,LOW),
    digitalWrite(ledm,LOW),
    digitalWrite(ledl,LOW);
    }*
    //we can turn this into a neater while statement:

while (state1==HIGH){
    //we can use while
    while (ledr<6){
        digitalWrite(ledr,HIGH);
        delay(1000);
        ledr ++;
    }
    //or use for
    for (int ledr=3;ledr<6; ledr++)[
        digitalWrite(ledr,HIGH);
        delay(1000);
    ]

}

}*/

int MRd1=0
    MRd2=1
    MRa=2
    MLd1=3
    MLd2=4
    MLa=5
void setup(){
    pinMode(0,OUTPUT);
    pinMode(1,OUTPUT);
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
}

void loop(){
    digitalWrite(MRd1,HIGH);
    digitalWrite(MLd1,HIGH);
    digitalWrite(MRd2,LOW);
    digitalWrite(MLd2,LOW);
    analogWrite(MRa,255);
    analogWrite(MLa,255);
    delay(3000);

    digitalWrite(MRd2,HIGH);
    digitalWrite(MLd2,HIGH);
    digitalWrite(MRd1,LOW);
    digitalWrite(MLd1,LOW);
    analogWrite(MRa,255);
    analogWrite(MLa,255);
    delay(3000);

    digitalWrite(MRd1,HIGH);
    digitalWrite(MLd2,HIGH);
    digitalWrite(MRd2,LOW);
    digitalWrite(MLd1,LOW);
    analogWrite(MRa,127.5);
    analogWrite(MLa,127.5);
    delay(3000);

    digitalWrite(MRd1,LOW);
    digitalWrite(MLd1,LOW);
    digitalWrite(MRd2,LOW);
    digitalWrite(MLd2,LOW);
    analogWrite(MRa,0);
    analogWrite(MLa,0);
}
