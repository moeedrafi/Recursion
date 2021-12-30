#include<iostream>
using namespace std;
void reverse_number(int x)
{
	if(x!=0)
	{
		cout<<x%10;
		reverse_number(x/10);
	}
	
}
int main()
{
	int x;
	cout<<"Enter any Number : ";
	cin>>x;
	reverse_number(x);
}
