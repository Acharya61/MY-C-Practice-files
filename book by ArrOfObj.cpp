#include<iostream>
using namespace std;

class Book
{
	int b_pages,b_price;
	string b_name;
	public:
		int input()
	{
		cout<<"ENTER BOOK DETAILS"<<endl;
		cin.ignore();
		cout<<"Enter Name: ";
		getline(cin, b_name);
		cout<<"Enter Price: ";
		cin>>b_price;
		cout<<"Enter Pages: ";
		cin>>b_pages;
		return 0;
	}
	    int show()
	{
		cout<<"BOOKS DETAILS PRINTING";
		cout<<"\nBook Name: "<<b_name<<endl;
		cout<<"Book Price: "<<b_price<<endl;
		cout<<"Book Pages: "<<b_pages<<endl;
		return 0;
	}
};

int main()
{
	Book ob[10];
	int i,n;
	cout<<"How many books details to print(max. 10): ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		ob[i].input();
	}
	for(i=0;i<n;i++)
	{ 
	     ob[i].show();
	}
	return 0;
}
