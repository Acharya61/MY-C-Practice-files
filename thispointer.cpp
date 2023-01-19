#include<iostream>

using namespace std;

class add{
	private:
		int a,b;
		public:
			int getdata(int a , int b)
			{
				this -> a=a;
				this -> b=b;
			}
			int display()
			{
				cout<<"sum is : "<<a+b<<endl;
				
			}
};
int main()
{
	int x,y;
	add obj;
	cout<<"enter two no. to add : ";
	cin>>x>>y;
	obj.getdata(x,y);
	obj.display();
	return 0 ;
	
}
