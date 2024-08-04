void setup() {
for(int i=5;i<10;i++)
  pinMode(i,OUTPUT);
pinMode(4,INPUT);
pinMode(11,INPUT);
pinMode(10,INPUT);
Serial.begin(9600);
  }

bool frontBarrier(){
  return distance()<15;
}
bool rightBarrier(){
  return digitalRead(11);
}
bool leftBarrier(){
  return digitalRead(10);
}
void loop() {
b1:
if(frontBarrier()==false){
  forward();
}
else{
  if(rightBarrier()==true){

    {backward();
    delay(100);
      right();
    delay(200);
    stop();
    delay(100);
    goto b1;}
  }
  else{
    if(leftBarrier()==true)
      {backward();
      delay(100);
      left();
      delay(200);
      stop();
      delay(100);
      goto b1;}
      else
        backward();

  }}

}
float distance(){
  g1:
  digitalWrite(5,0);
  delayMicroseconds(10);
  digitalWrite(5,1);
  delayMicroseconds(10);
  digitalWrite(5,0);
  float x=pulseIn(4,1)*0.0343/2;
  if(x==0)
    goto g1;
  return x;
}
void forward(){
  move(1,0,1,0);
}
void backward(){
  move(0,1,0,1);

}
void right(){
  move(0,0,0,1);
}
void left(){
  move(0,1,0,0);
}
void stop(){
  move(0,0,0,0);
}
void move(int x, int y,int w,int z){
  digitalWrite(6,x);
  digitalWrite(7,y);
  digitalWrite(8,x);
  digitalWrite(9,z);
}