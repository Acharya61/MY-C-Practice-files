#include<iostream>
using namespace std;

int main()
{
	int i,fact=1,n;
	cout<<"enter a no.=";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"the factorial of "<<n<<" is "<<fact;
	
}
