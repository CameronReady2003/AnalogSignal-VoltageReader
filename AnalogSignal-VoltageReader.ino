int LED_red = 10;
int LED_yellow = 11;
int LED_blue = 12;
int LED_green = 13;
int Button = 3;
int i;
bool Key = false;
void setup()
{
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT); 
  pinMode(A0, INPUT);
  pinMode(Button, INPUT);
  Serial.begin(9600);
}
void loop()
{
  int sensor = analogRead(A0);
  int voltage = sensor * (5.0/1023.0);
  int  pbValue = digitalRead(Button);
  if( pbValue == LOW && Key == false){
    delay(10);
          if(sensor >= 818 && voltage >= 4){
             Serial.print("Analog signal is HIGH: ");
                Serial.println(sensor);
             delay(sensor);
                Serial.print("The voltage is HIGH: ");
              Serial.println(voltage);
            digitalWrite(LED_red, HIGH);
            delay(sensor);
            digitalWrite(LED_red,LOW);
            }
          else if(sensor >= 613 && voltage <=3){
             Serial.print("Analog signal is Medium: ");
                Serial.println(sensor);
             delay(sensor);
                Serial.print("The voltage is Medium: ");
              Serial.println(voltage);
            digitalWrite(LED_yellow, HIGH);
            delay(sensor);
            digitalWrite(LED_yellow,LOW);
             }
          else if(sensor >= 409 && voltage <=2){
                 Serial.print("Analog signal is Low: ");
                Serial.println(sensor);
                delay(sensor);
                Serial.print("The voltage is Low: ");
              Serial.println(voltage);
            digitalWrite(LED_blue, HIGH);
            delay(sensor);
            digitalWrite(LED_blue,LOW);
            }
          else if(sensor > 0 && voltage <=2){
             Serial.print("Analog signal is Very Low: ");
             Serial.println(sensor);
                 delay(sensor);
                Serial.print("The voltage is Very Low: ");
              Serial.println(voltage);
            digitalWrite(LED_green, HIGH);
            delay(sensor);
            digitalWrite(LED_green,LOW);
             }
          else if(sensor == 0 && voltage ==0){
               Serial.print("Analog signal is: ");
               Serial.println(sensor);
                   delay(sensor);
                  Serial.print("The voltage is: ");
                Serial.println(voltage);
               }
          } 
  else{
  Key = true;
   delay(1000); 
    while(Key==true){
      delay(500);
      pbValue = digitalRead(Button);
       if(pbValue == HIGH){
        Key = false;
        break;
      }
    }
    Serial.print("Button Clicked");
    delay(1000); 
    Serial.print(" Restarting\n");
    delay(3000);
   }
 }
