
/*A carpenter named Mohan is cutting two wooden planks of different lengths.
He wants to cut both planks into smaller equal pieces without any leftover wood.
To do this, he needs to find the greatest common divisor (GCD) of the two lengths.
He also wants to know the least common multiple (LCM) — the smallest length at which both planks can be exactly aligned if placed end to end repeatedly.

Can you help Mohan calculate both the GCD and LCM of the given two lengths?
Task:
Write a program that takes two integers as input and:

Calculates the GCD (Greatest Common Divisor) of the two numbers.

Calculates the LCM (Least Common Multiple) of the two numbers.
Input Format:
The first line contains two integers — the lengths of the two planks.

 */


#include<iostream>
using namespace std;
int main()
{
    int GCD,LCM;
    int num1,num2;
    int a,b;

    cin>>num1>>num2;

    a=num1;
    b=num2;

    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    GCD=a;

    LCM=(num1*num2)/GCD;

    cout<<"GCD = "<<GCD<<endl;
    cout<<"LCM = "<<LCM<<endl;

    return 0;
}
