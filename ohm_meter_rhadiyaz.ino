void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(A0,INPUT);
 digitalWrite(A0,0);

 int Nilaisensor= analogRead(A0);
 

  float Tegangan = Nilaisensor * ( 5.0/1023.0);
  Serial.print("Tegangan = ");Serial.println(Tegangan); 
  
float i = (5.0 - Tegangan )/ 100.0 ;

 float R2 = Tegangan / i;
 Serial.print("resistor 2 = "); Serial.println(R2);
}

void loop() {
  // put your main code here, to run repeatedly:

}
