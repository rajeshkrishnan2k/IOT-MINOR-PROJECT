# COLOR SENSOR USING A LDR


# Aim:

The aim is to develop a color sensor that is LDR (Light Dependent Resistor) based. The color sensor must be able to identify three primary colors: Red, Green and Blue.

# Components Required:
-	LDR – 1
-	RGB LED – 1
-	Red LED – 1
-	Green LED – 1
-	Blue LED – 1
-	Few Jumper wires
-	1k Resistors – 4
-	Microcontroller (Arduino UNO)


# Theory:



![image](https://user-images.githubusercontent.com/62196439/76695900-c8f20880-66aa-11ea-8834-9820590eef55.png)

 
LDR stands for Light Dependent Resistor, which is a passive electronic component, basically a resistor which has a resistance that varies depending of the light intensity. The resistance of a photoresistor decreases with increase in incident light intensity; in other words, it exhibits photoconductivity. 
Our job here is to develop the LDR in such a way that it is able to detect the basic colors i.e. Red, Green and Blue.
Procedure:
THE CODE HAS BEEN ATTACHED. PLEASE DO REFER.
i.	Set up the circuit as shown in the figure. Make sure the LDR is closer to the RGB LED and that it faces the LED.
ii.	Note down the operating voltages of the different colors using the analogRead() function.
iii.	Now develop a code such that the LDR detects the color in the observed range of operating voltages.
iv.	Now connect the Red, Blue and Green LED’s such that when the RGB is Red in color, the Red LED should glow. Similarly do it for the other two colors. The LED color indicates the reading of the LDR.
Result:
It is observed that when the RGB is Red, the Red LED glows and the same occurs for the rest of the colors. Therefore we developed a code for the LDR to detect colors of Red, Green and Blue.


# Applications:

-	Street lights: The working principle of LDR is that it gives less resistance in high light intensity and high resistance in low light intensity i.e. it gives high resistance in dark or night and low resistance in day or light. Here we use transistor as a two way switch.

-	These devices are used where there is a need to sense the presence and absence of light is necessary. These resistors are used as light sensors and the applications of LDR mainly include alarm clocks, street lights, light intensity meters, burglar alarm circuits.




