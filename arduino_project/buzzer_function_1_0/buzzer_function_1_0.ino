//www.elegoo.com
//2016.12.08

int buzzer = 12;//the pin of the active buzzer
void setup()
{
  pinMode(buzzer,OUTPUT);//initialize the buzzer pin as an output
  buzzer_n_times(5); //n for the buzzer times

}
void loop()
{
} 

void buzzer_n_times(int n) // n for multiple times
{
  unsigned char i; 
  for(i=0;i<n;i++)
  {
    tone(buzzer,200);
    delay(1000);
    noTone(buzzer);
    delay(500);
  }
}
