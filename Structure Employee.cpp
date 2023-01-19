#include<iostream>
using namespace std;

struct employee
{
	 string emp_name;
	 string emp_city;
	 long long emp_phone_number;	 
};
int main()
{
	 cout<<"ENTER EMPLOYEE DETAILS "<<endl;
	 employee emp[10];
	 int i,n;
	 cout<<"Enter Employee No.:";
	 cin>>n;
	 
	 for(i=0;i<n;i++)
	 {
	 	cin.ignore();
	 	cout<<"Enter "<<i+1<<" Employee Name: "<<endl;
	 	getline(cin, emp[i].emp_name);
	 	
	    cin.ignore();
	 	cout<<"Enter "<<i+1<<" Employee City:"<<endl;
	 	getline(cin, emp[i].emp_city);
	 	
	 	cout<<"Enter "<<i+1<<" Employee Phone No.:"<<endl;
	 	cin>>emp[i].emp_phone_number;
	 }
	 
	 for(i=0;i<n;i++)
	 {
	 	cout<<"EMPLOYEE "<<i+1<<" DETAILS";
	 	cout<<"\n"<<" Employee Name: "<<emp[i] .emp_name<<endl;
	 	cout<<" Employee City: "<<emp[i] .emp_city<<endl;
	 	cout<<" Employee Phone No.: "<<emp[i] .emp_phone_number<<endl;
	 }
	 return 0;
}
