const int TrigPinR = 10;
const int echoPinR = 9;
const int TrigPinL = 2;
const int echoPinL = 4;      
unsigned long temp = 0;
unsigned long templ = 0;
unsigned long tempr = 0;
unsigned long temp2,temp4 = 0;
int l = 0;
long distl, distr;
void setup()
{
  Serial.begin(9600);
  pinMode(TrigPinR, OUTPUT);
  pinMode(echoPinR, INPUT);
  pinMode(TrigPinL, OUTPUT);
  pinMode(echoPinL, INPUT);

}
long find_dist(int Tp, int Ep)
{
  long distance,duration;
  digitalWrite(Tp, LOW); 
  delayMicroseconds(2);
  digitalWrite(Tp, HIGH);
  delayMicroseconds(10);
  digitalWrite(Tp, LOW);
  duration = pulseIn(Ep, HIGH);
  distance = (duration / 2) / 29.1;
  if (distance >= 60)
  {
    distance = 60;
  }
  return distance;
}
void loop()
{
  distr = find_dist(TrigPinR, echoPinR);
  distl = find_dist(TrigPinL, echoPinL);
  Serial.println(distr);
  //Right Hand Stable
  if ((distr <= 35 && distr >= 15) and (distl==60))
  {
    delay(600);
    temp = find_dist(TrigPinR, echoPinR);
    if (temp <= 35 && temp >= 15)
    {
      Serial.println("ges1");
    }
    else
    {
      Serial.println("ges4");
    }
  }
 else if ((distr <= 15 && distr >= 0) and (distl==60))
  {
    delay(600);
    temp = find_dist(TrigPinR, echoPinR);
    if (distr <= 15 && distr >= 0)
    {
      Serial.println("ges2");
    }
  }
  else if ((distr < 50 && distr >= 35) and (distl==60))
  {
    delay(600);
    temp = find_dist(TrigPinR, echoPinR);
    if (distr < 50 && distr >= 35)
    {
      Serial.println("ges3");
    }
  }
  //Left Hand Stable
  else if((distl <= 35 && distl >= 15) and (distr==60))
  {
    delay(600);
    temp = find_dist(TrigPinL, echoPinL);
    if (temp <= 35 && temp >= 15)
    {
      Serial.println("ges5");
    }
    else
    {
      Serial.println("ges8");
    }
  }
 else if ((distl <= 15 && distl >= 0) and (distr==60))
  {
    delay(600);
    temp = find_dist(TrigPinL, echoPinL);
    if (distl <= 15 && distl >= 0)
    {
      Serial.println("ges6");
    }
  }
 else if ((distl < 50 && distl >= 35) and (distr==60))
  {
    delay(600);
    temp = find_dist(TrigPinL, echoPinL);
    if (distl < 50 && distl >= 35)
    {
      Serial.println("ges7");
    }
  }
  else if ((distr <= 35 && distr >= 15) and (distl<=35 && distr>=15))
  {
    delay(600);
    templ = find_dist(TrigPinL,echoPinL);
    tempr = find_dist(TrigPinR,echoPinR);
    if ((templ <= 35 && templ >= 15) and (tempr<=35 && tempr>=15))
    {
      Serial.println("ges9");
    }
  }
  else if ((distr <= 15 && distr >= 0) and (distl<=15 && distr>=0))
  {
    delay(600);
    templ = find_dist(TrigPinL,echoPinL);
    tempr = find_dist(TrigPinR,echoPinR);
    if ((templ <= 15 && templ >= 0) and (tempr<=15 && tempr>=0))
    {
      Serial.println("ges10");
    }
  }
  else if ((distr <= 50 && distr >= 35) and (distl<=50 && distr>=35))
  {
    delay(600);
    templ = find_dist(TrigPinL,echoPinL);
    tempr = find_dist(TrigPinR,echoPinR);
    if ((templ <= 50 && templ >= 35) and (tempr<=50 && tempr>=35))
    {
      Serial.println("ges11");
    }
  }
  delay(200);
}
