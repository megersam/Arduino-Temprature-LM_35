int tempPin = A0; // define LM35DZ signal on analog pin A0
int min =20; // define minimum plot value
int max = 30; // define maximum plot value
int reading; // define reading as an integer
float temp; // define temp as a real number
void setup()
{
Serial.begin(9600); // define Serial output baud rate
analogReference(INTERNAL); // set ADC voltage to 1.1V rather than 5V
}
void loop()
{
reading = analogRead(tempPin); // read temperature sensor pin
temp = (reading * 110.0)/1023; // convert reading to temperature
// convert minimum, temperature and maximum to a string

String axis = String(min) +" "+ String(temp) +" "+ String(max);
Serial.println(axis); // update plot
delay(10); // delay 10ms between readings
}
