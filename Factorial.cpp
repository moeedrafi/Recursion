#include<iostream>
using namespace std;
int fact(int x)
{
	if(x==0 || x==1)     //Base Case
	{
		return 1;
	}
	else    //Recursive Case
	{
		return x*fact(x-1);
	}
}
int main()
{
	int x;
	cout<<"Enter any Number : ";
	cin>>x;
	cout<<fact(x);
}
