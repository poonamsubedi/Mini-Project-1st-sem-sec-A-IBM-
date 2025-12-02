/*A farmer named Raju owns a rectangular piece of land.
He wants to build a fence around it and also plant crops inside the land.

To plan the fencing and crop area, he needs to calculate:

The area of the rectangle (for crops).

The perimeter of the rectangle (for fencing).

He knows the length and width of the land in meters.
Can you help Raju write a program to find both the area and perimeter of his land?

🧠 Task:
Write a program that takes two integers as input — the length and width of the rectangle —
and prints the area and perimeter.

*/


#include<iostream>
using namespace std;

int main() {
    int length, width;

    // Input length and width
    cin>> length ;
    cin>>width;

    // Calculate area and perimeter
    int area = length * width;
    int perimeter = 2 * (length + width);

    // Output results
    cout << "Area = " << area ;
    cout << "Perimeter = " << perimeter ;

 return 0;
}

