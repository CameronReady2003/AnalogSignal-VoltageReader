# AnalogSignal-VoltageReader
Arduino ide code that displays the voltage and analog signal of a 5v power source, with those corresponding values will turn on and off a group of LED's, the LED will be decided by conditional statements. A button and its corresponding status is used to decide whether the circuit is running or not through the button pin state and a Boolean variable. If the button's state is Low the circuit will run until the button is pressed and turn back on when it is pressed again.

**Components & Devices**
Used 4 LED's, a Push Button, Potentiometer, Arduino Uno R3, Breadboard.

**Instructions:**
When code is executed the value of the analog signal of the Potentiometer will dictate the serial monitor strings and the output of the led's. Moving the meter around from 0 to 1023 will display the full output of the LED's, the voltage and analog signal dictate which LED will be in use. The first if conditonal statement will dictate whether the circuit will run or not, the pbValue variable will take in the state of the button while also using a boolean value "Key" as parameters for if the corresponding conditional statements will allow the code to run. When the Push Button is "LOW" and "Key" is "false" the loop of the Potentiometer values will begin, once the button is pressed changing the pbValue status to High the loop will procede to the else statement that will leave the circuit off until the botton is pressed again. A while loop that allows for the "Key" to change back to the "false" state will be used. Once the button is pressed again the while loop will procede and finsih with outputting some final string to show the circuit is being activated once more. The "Key" Value now being "false" allows for the arduino loop function to procede again.

**Improvements:** My first non academicly advised project that I created, the overal code could be organized more and I feel I could make better use of the delay() function inbetween statements. Will add to this project to better practise my arduino ide skills.
![Cameron Ready AnalogSignal_Voltage reading](https://user-images.githubusercontent.com/130194724/230698349-d30cbc2c-9799-4408-aa93-e2e03221e91e.png)
