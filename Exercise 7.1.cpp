#include<iostream>
using namespace std;
int trinum(int x)
{
	if(x==0)  //Base Case
	{
		return 0;
	}
	else   //recursive Case
	{
		return x+trinum(x-1);
	}
	
}
int main()
{
	int x;
	cout<<"Enter any Number : ";
	cin>>x;
	cout<<trinum(x);
}
