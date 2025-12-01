/*A shopkeeper named Ramesh has a lucky number. He believes that if the number is even, he will have a lucky day, and if it is odd, he will have to work harder. He also wants to check if the number is divisible by 5, as that brings him extra luck!
Can you help Ramesh write a program to check his number?
Task:
Write a program that takes an integer as input and:

Checks whether it is even or odd.

Checks whether it is divisible by 5 or not.
*/


#include<iostream>
using namespace std;
int main()
{
	int num;
	
	
	cin>>num;
	if(num%2==0){
		cout<<" even number"<<endl;
	}
	else{
		cout<<"odd number"<<endl;
	}
	
	if(num%5==0){
		cout<<" divisible by 5"<<endl;
	}
	else{
		cout<<"not divisible by 5"<<endl;
	}
	return 0;
}
