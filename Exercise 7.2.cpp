#include<iostream>
using namespace std;
int fibonacci(int x)
{
	if(x==0 || x==1)   //Base Case
	{
		return x;
	}
	else     //recursive case
	{
		return fibonacci(x-1)+fibonacci(x-2);
	}
	
}
int main()
{
	int x;
	cout<<"Enter any Number : ";
	cin>>x;
	cout<<fibonacci(x);
}
