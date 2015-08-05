int led[]={13,12,11};
void setup() {
  // initialize digital pin 13 as an output.
  for(int i=0;i<3;i++)
  {
  pinMode(led[i], OUTPUT);
  }
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led[0],HIGH);
  for(int i=1;i<3;i++)
  {
  digitalWrite(led[i], LOW);
  }            
}
