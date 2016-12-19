void setup()
{
	Serial.begin(115200);
	pinMode(13, OUTPUT);
}

void loop()
{
	int a;
	for(int i=10;i<1000;i++)
	{
		a=analogRead(0);
		map(a,0,1023,0,255);
		analogWrite(13, a);
		
	}
	Serial.println("happy ending");
	
}
