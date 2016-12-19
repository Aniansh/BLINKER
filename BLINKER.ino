void setup()
{
	pinMode(13, OUTPUT);
}

void loop()
{
	for(int i=10;i<1000;i++)
	{
		digitalWrite(13, HIGH);
		delay(10);
		digitalWrite(13,LOW);
		delay(10);
	}
	
}
