/*Chef Rohan is preparing a special recipe that needs the oven temperature in Fahrenheit,
but his thermometer only shows Celsius readings.

He needs your help to convert the temperature from Celsius to Fahrenheit
so that his dish cooks perfectly.

Can you write a program to help Chef Rohan convert Celsius to Fahrenheit?

🧠 Task:
Write a program that takes a temperature in Celsius as input
and prints the equivalent temperature in Fahrenheit.
*/

#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;

    
    cin >> celsius;

   
    fahrenheit = (celsius * 9/5) + 32;

   
    cout << fahrenheit;

    return 0;
}
