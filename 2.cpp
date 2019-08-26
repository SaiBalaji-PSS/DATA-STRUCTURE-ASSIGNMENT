
#include<iostream> 
using namespace std;


void MAXIMUMACTS(int s[], int f[], int n) 
{ 
	int i, j; 

	cout<<"SELECTED ACTIVITIES"<<endl; 

	
	i = 0; 
	cout<<i<<endl; 

	 
	for (j = 1; j < n; j++) 
	{ 

	if (s[j] >= f[i]) 
	{ 
		cout<<j<<endl; 
		i = j; 
	} 
	} 
} 


int main() 
{ 
	int s[100]; 
	cout<<"ENTER THE NUMBER OF ACTIVITIES"<<endl;
	int n;
	cin>>n;
	cout<<"ENTER THE START TIME"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		
	}
	int f[100]; 
		cout<<"ENTER THE END TIME"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>f[i];
		
	}
	int N = sizeof(s)/sizeof(s[0]); 
	MAXIMUMACTS(s, f, n); 
	return 0; 
} 
