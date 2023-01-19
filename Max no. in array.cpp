#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int i,n;
	float A[100];
	cout<<"enter no. of elements (1 to 100) = ";
	cin>>n;
	
	for(i=0;i<n;++i)
	{
		cout<<"enter no "<<i+1<<" = ";
		cin>>A[i];
	}
	for(i=0;i<n;++i)
	{
		if(A[0]<A[i])
		A[0]=A[i];
	}
	cout<<"largest no.="<<A[0];
	
}
