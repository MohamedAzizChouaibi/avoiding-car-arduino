 int tr= 6;
 int e=8;
int irn=9;
int ir=10;
int kg=2;
int lg=3;
int kd=4;
int ld=5;
int sl=digitalRead(10);
int si=digitalRead(9);
void setup() {
  for (int j =8 ; j<11 ; j++){
    pinMode(j, INPUT);}

  
  for (int i=2;i<7;i++){
    pinMode(i, OUTPUT);}
    Serial.begin(9600);

  
  // put your setup code here, to run once:

}

void loop() { 
  float d=dis();

  if(d>15){
    godem();
   

  }
  else{
    b1:
      sl=digitalRead(10);
      si=digitalRead(9);
      if( digitalRead(9)==1){
        limin();
      }

      else{
        if(digitalRead(10)==1){
          gauche();
        }
        else
              {

                  wa5er();
                  delay(200);
                  goto b1;

                  }
        
        
      
      }
    }
}

  // put your main code here, to run repeatedly:
float dis (){
  digitalWrite(tr,0) ;
  delayMicroseconds(5) ;
  digitalWrite(tr,1) ;
  delayMicroseconds(10);
  digitalWrite(tr,0) ;
  delayMicroseconds(5);
   float t=pulseIn(e,1);
  float d=0.0343*t/2 ;
  return(d)  ;}
void  godem (){
  digitalWrite(kg, 1);
  digitalWrite(lg, 0); 
  digitalWrite(kd, 1);
  digitalWrite(ld, 0); 
  }
  void  wa5er (){
  digitalWrite(kg, 0);
  digitalWrite(lg, 1); 
  digitalWrite(kd, 0);
  digitalWrite(ld, 1); }
  void  limin (){
  digitalWrite(kg, 0);
  digitalWrite(lg, 1); 
  digitalWrite(kd, 1);
  digitalWrite(ld, 0); }
   void  gauche(){
  digitalWrite(kg, 1);
  digitalWrite(lg, 0); 
  digitalWrite(kd, 0);
  digitalWrite(ld, 1); }


  




