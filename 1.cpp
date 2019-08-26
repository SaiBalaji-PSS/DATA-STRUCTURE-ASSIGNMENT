#include<iostream>
#include<vector>
#include <algorithm> 

using namespace std;
struct node
{
	int accno;
	string name;
	int bal;
	string act;
	struct node *next;
};
class List
{
	struct node * head;
	int n;
	public:
			
		List()
		{
			head=NULL;
			n=0;
		}
		~List()
		{
			cout<<endl<<endl;
			cout<<"\t\tTHANK YOU FOR USING OUR SERVICE:)"<<endl;
		}
		void create()
		{
			struct node *customer,*c;
				customer = new node;
			cout<<"ENTER THE FOLLOWING DETAILS"<<endl;
			cout<<endl;
			cout<<"ACCNO::";
			cin>>customer->accno;
			cout<<"NAME::";
			cin>>customer->name;
			cout<<"BALANCE::";
			cin>>customer->bal;
			cout<<"ACCOUNT TYPE::";
			cin>>customer->act;
			
		
			c= new node;
			if(head==NULL)
			{
				head=customer;
				n++;
				return;
			}
			for(c=head;c->next!=NULL;c=c->next);
			c->next=customer;
			customer->next=NULL;
			n++;
			
			
		}
		
		
		
		
		
		
		
		
		
		
		
		
		void display()
	    {
	    	cout<<"CUSTOMER DETAILS ARE"<<endl;
	         struct node *c;
	         for(c=head;c!=NULL;c=c->next)
	         {
	         	cout<<"NAME:"<<c->name<<endl;
	         	cout<<"ACCOUNT NUMBER:"<<c->accno<<endl;
	         	cout<<"ACCOUNT TYPE:"<<c->act<<endl;
	         	cout<<"BALANCE:"<<c->bal<<endl;
	         	cout<<endl<<endl;
			 }
		}
		void bubbleSort() 
		{   
		   struct node *obj[n];
		   struct node *c=new node;
		   int i;
		   for(i=0,c=head;c!=NULL;c=c->next,i++)
		   {
		   	  obj[i]=c;
		   	  
		   }
		   struct node *temp=new node;
		   for(int i=0;i<n;i++)
		   {
		   		for(int j=0;j<n-i-1;j++)
		   		{
		   			if(obj[j]->bal>obj[j+1]->bal)
		   			{
		   				temp=obj[j];
		   				obj[j]=obj[j+1];
		   				obj[j+1]=temp;
		   				
		   				
					   }
				   }
		   }
		   cout<<"ACCOUNTS SORTED BASED ON BALANCE"<<endl;
		   for(int i=0;i<n;i++)
		   {    
		   		cout<<"ACCNO::"<<obj[i]->accno<<endl;
		   		cout<<"NAME::"<<obj[i]->name<<endl;
		   		cout<<"BALANCE::$"<<obj[i]->bal<<endl;
		   		cout<<"ACCOUNT TYPE::"<<obj[i]->act<<endl;
		   }
		   
		   
		}
		
		
};



int main()
{
	List obj;
	cout<<"**********************Welcome***********************"<<endl<<"ENTER THE NUMBER OF ENTRY"<<endl;
	int n,N;
	cin>>n;
	while(n--)
	{
		obj.create();
	}
	
   do
   {
   
    cout<<"SELECT YOUR CHOICE"<<endl<<"1.DISPLAY"<<endl<<"2.SORTED DISPLAY"<<endl;
    int ch;
    cin>>ch;
    
	
    switch(ch)
    {
    	case 1:
    		{
    				obj.display();
    				break;
    			
			}
		case 2:
			{
				obj.bubbleSort();
				break;
			}
		default:
			{
				cout<<"INVALID CHOICE"<<endl;
				break;
			} 
	}
	cout<<"DO YOU WANT TO CONTINUE"<<endl;
	
	cin>>N;
	cout<<endl<<endl;
	}while(N==1);


	
	return 0;
}
