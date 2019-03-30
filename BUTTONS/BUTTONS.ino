int led1=(8),
    led2=(12),
    but1=(7),
    but2=(13);

    
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(but1,INPUT);
  pinMode(but2,OUTPUT);

}

void loop() {
  int State1=(digitalRead(but1)),
      State2=(digitalRead(but2));
      
    if (State1==HIGH && State2==HIGH){
      digitalWrite(led1,HIGH),
      digitalWrite(led2,HIGH);  
    }
    else if (State1==HIGH){
      digitalWrite(led1,HIGH);
    }
    else if (State2==HIGH){
      digitalWrite(led2,HIGH);
    }
    
    

}
