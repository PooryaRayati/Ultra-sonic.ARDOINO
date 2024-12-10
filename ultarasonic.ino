int min = 0;
int g = 0;
int h = 0;
int j = 0;
int k = 0;
int f = 0;
int e = 0;
int d = 0;
int c = 0;
int b = 0;
int a = 0;
int i = 0;
int buzzer = 12;
int trigPin = 4;
int echoPin = 3;
float duration, distance;
void setup() {

  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (i < 100000) {
    digitalWrite(echoPin, LOW);
    digitalWrite(trigPin, LOW);

    delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);

    delayMicroseconds(1);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = (duration / 2.0) * 0.0343;
    delay(200);
    if (distance > 30 || distance <= 0){
      digitalWrite(buzzer,LOW);
    }
    else {
      digitalWrite(buzzer,HIGH);
      i++;
    }
    if (i==1){
      a = distance;
    }
    else if (i==2){
      b = distance;
    }
    else if(i==3){
      c = distance;
    }
    else if (i==4){
      d = distance;
    }
    else if (i==5){
      e = distance;
    }
    else if (i==6){
      f = distance;
    }
    else if (i==7){
      g = distance;
    }
    else if (i==8){
      h = distance;
    }
    else if (i==9){
      j = distance;
    }
    else if (i==10){
      k = distance;
      min = (a+b+c+d+e+f+g+h+j+k)/10 ;
      Serial.print(min);
    }
  }
}