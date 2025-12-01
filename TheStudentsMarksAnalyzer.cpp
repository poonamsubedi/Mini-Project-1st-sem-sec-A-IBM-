
/*A teacher wants to analyze the marks of her students in a test.
She asks you to write a program that stores the marks of n students and finds out:

The total marks obtained by all students.

The average marks of the class.

Can you help the teacher by writing the program?
Task:

Write a program that takes the number of students and their marks as input and calculates:

The total marks

The average marks
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int marks[n], total = 0;
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
        total += marks[i];
    }

    float average = (float)total / n;

    cout << "Total Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;

 return 0;
}
