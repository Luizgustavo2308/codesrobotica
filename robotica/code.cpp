int led = 13;
int ldr= A0;

void setup()
{
  pinMode(led, OUTPUT);
  
}

void loop()
{
  int estado= analogRead(ldr);
    if(estado>500){
    digitalWrite(led, HIGH);
      
    }else{
    digitalWrite(led, LOW); 
    }
}


#define vm 13
#define am 12
#define vd 11

int tempoVm = 6000;
int tempoAm = 2000;
int tempoVd = 4000;
void setup()
{
  pinMode(vm, OUTPUT);
  pinMode(am, OUTPUT);
    pinMode(vd, OUTPUT);
}

void loop()
{
  digitalWrite(vm, HIGH);
  delay(tempoVm); // Wait for 1000 millisecond(s)
  digitalWrite(vm, LOW);
  digitalWrite(vd, HIGH);
  delay(tempoVd);
 digitalWrite(vd, LOW);
  digitalWrite(am, HIGH);
  delay(tempoAm);
 digitalWrite(am, LOW);
}