# Ultrasonic_Sensor

For those of you who pointed out that in our program statement

`distance = duration * 0.034/2;`

distance is of type float, duration is of type long, and 0.034 is of type float. Yes, it is bad programming
habit to use multiple types in a single calculation. You should NOT do that in actual coding, especially for
safety-critical system. However, for the purpose of this tutorial, we chose to simplify the code for the
members who are not well-verse in programming.
