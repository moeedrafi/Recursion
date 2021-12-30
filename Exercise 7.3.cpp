#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
class singly
{
	private :
	 	node *head;
	public :	 		
		singly()
		{
			head = NULL;
		}
		void add_to_end(int num)
		{
			node *temp = new node; //goes to struct which have (a)data and next pointer
			temp ->data = num;
			temp -> next = NULL;
			if(head == NULL)
			{
				head = temp;
			}
			else
			{
				node *p = head; //initialize pointer which we use to connect new node to end
				while(p->next != NULL)
				{
					p = p->next;
				}
				p->next = temp;
			}
			temp = NULL;
			delete temp;
		}
		void rev()
		{
			reverse_display(head);
		}
		void reverse_display(node *head)
		{
			if(head!=NULL)
			{
				reverse_display(head->next);
				cout<<head->data;
			}
		}
};
int main()
{
	singly s;
	s.add_to_end(3);
	s.add_to_end(4);
	s.add_to_end(5);
	s.add_to_end(6);
	s.rev();
}
