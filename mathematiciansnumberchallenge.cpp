/*Riya, a young mathematician, loves playing with numbers. One day, she picks a number and wants to check two things:

Whether the number is prime or not.

Whether it is even or odd.
She wants your help to write a program that tells her both answers.
Task:
Write a program that takes an integer as input and:

Checks if it is a prime number or not.

Checks whether it is even or odd.
*/

#include<iostream>
using namespace std;
int main()
{
	int num;
	int count;
	
	
	
	cin>>num;
	
	if(num<=0){
		cout<<"Not prime"<<endl;
	}
	else{
		
		for(int i=1;i<=num;i++){
			if(num%i==0){
				count++;
			}
		}
		if(count==2){
			cout<<"Prime Number"<<endl;
			
		}
		else{
			cout<<"Not Prime"<<endl;
		}
	}
	if(num%2==0){
		cout<<"even number"<<endl;
	}
	else{
		cout<<"odd number"<<endl;
	}
	return 0;
}
