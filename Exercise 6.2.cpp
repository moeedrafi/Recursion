#include<iostream>
#include<sstream>
using namespace std;
struct node
{
	char letter;
	node *next;
};
class concatenate
{
	node *front,*rear;
	public:
		concatenate()
		{
			front = NULL;
			rear = NULL;
		}
		void enqueue(int num)
		{
			node *temp = new node;
			temp->letter = num;
			temp->next = NULL;
			if(rear == NULL) 
			{ 
				front = temp; 
			}
			else 
			{ 
				rear->next = temp; 
			}
			rear = temp;
		}
		void display()
		{
			node *dis = front;
			while(dis!=NULL)
			{
				cout<<dis->letter;
				dis= dis->next;
			}
		}
};
int main()
{
	concatenate c1,c2,c3,c4;
	string str = "Data Structure and Algorithm";
	string word[4];
	int j=0;
	for(int i=0;i<str.length();i++)
	{
		if(str[i] != ' ')
		{
			word[j] = word[j]+str[i];
		}
		else
		{
			j++;
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<word[0].length();j++)
		{
			c1.enqueue(word[j]);
		}
//		cout<<word[i]<<endl;
	}
	c1.display();
}
