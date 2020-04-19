/**
   FF9 King of Jump Rope

   @version 1.0
   @see Solenoid on pin 9.
   @link Concept Arduino + Solenoid: https://core-electronics.com.au/tutorials/solenoid-control-with-arduino.html
   @link Idea from on Rasp: https://github.com/mikelhamer/kojr/blob/master/kojr.py
   @link With timing from for AutoIt: https://github.com/septomor/FF9-Jump-Rope-Script/blob/master/Jump.ahk
*/

int count = 0,
    run = 0,
    solenoidPin = 9;

void setup()
{
  Serial.begin(9600);
  pinMode(solenoidPin, OUTPUT);
}

void push(int wait, int sleep = 50)
{
  Serial.println("Jump: " + String(++count));
  digitalWrite(solenoidPin, HIGH);
  delay(sleep);
  digitalWrite(solenoidPin, LOW);
  delay(wait);
}

void jump1To19()
{
  for (int i = 0; i < 10; i++)
  {
    push(593);
    push(588);
  }
}

void jump20To49()
{
  for (int i = 0; i < 15; i++)
  {
    push(460);
    push(440);
  }
}

void jump50To99()
{
  for (int i = 0; i < 10; i++)
  {
    push(390);
  }
  for (int i = 0; i < 20; i++)
  {
    push(388);
  }
  for (int i = 0; i < 20; i++)
  {
    push(390);
  }
}

void jump100To199()
{
  for (int i = 0; i < 20; i++)
  {
    push(355);
  }
  for (int i = 0; i < 10; i++)
  {
    push(349);
  }
  // 130
  for (int i = 0; i < 25; i++)
  {
    push(355);
  }
  // 155
  for (int i = 0; i < 10; i++)
  {
    push(349);
  }
  // 165
  for (int i = 0; i < 25; i++)
  {
    push(353);
  }
  // 190
  for (int i = 0; i < 10; i++)
  {
    push(349);
  }
}

void jump200To299()
{
  for (int i = 0; i < 5; i++)
  {
    push(305, 45);
    push(310, 45);
  }
  // 210
  for (int i = 0; i < 30; i++)
  {
    push(300, 45);
    push(312, 45);
  }
  // 270
  for (int i = 0; i < 15; i++)
  {
    push(300, 45);
    push(310, 45);
  }
}

void jump300To999()
{
  for (int j = 0; j < 10; j++)
  {
    for (int i = 0; i < 10; i++)
    {
      push(315);
      push(325);
    }
    delay(5);

    //28
    for (int i = 0; i < 3; i++)
    {
      push(310);
      push(320);
    }

    //34
    for (int i = 0; i < 4; i++)
    {
      push(320);
      push(330);
    }

    //42
    for (int i = 0; i < 4; i++)
    {
      push(317);
      push(327);
    }

    //50
    for (int i = 0; i < 4; i++)
    {
      push(320);
      push(325);
    }

    //58
    push(310);
    push(320);
    delay(20);

    //60
    for (int i = 0; i < 5; i++)
    {
      push(330);
      push(325);
    }

    //70
    for (int i = 0; i < 5; i++)
    {
      push(315);
      push(325);
    }

    delay(20);
  }
}

void start()
{
  run = 1;
  count = 0;
  Serial.println("Start");
  push(1000);
  Serial.println("jump1To19");
  jump1To19();
  Serial.println("jump20To49");
  jump20To49();
  Serial.println("jump50To99");
  jump50To99();
  Serial.println("jump100To199");
  jump100To199();
  Serial.println("jump200To299");
  jump200To299();
  Serial.println("jump300To999");
  jump300To999();
  push(1000);
  Serial.println("End");
}

void loop()
{
  if (run == 0)
  {
    start();
  }
}
