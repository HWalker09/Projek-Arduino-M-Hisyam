int pb= 2;
int nilaipb;
int count;

int red= 8;
int yellow= 9;
int green= 10;

void setup() {
pinMode(pb, INPUT);
pinMode(red, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(green, OUTPUT);

Serial.begin(9600);
}

void loop() {
nilaipb= digitalRead(pb);

if(nilaipb == 1){
  count++;
  Serial.println(nilaipb);
  delay(300);
  if(count==1){
    digitalWrite(red, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
  }
  if(count==2){
    digitalWrite(red, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, LOW);
  }
  if(count==3){
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green, HIGH);
  }
  
  if(count==4){
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
    count=0;
  }
}

}
