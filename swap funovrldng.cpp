#include<iostream>
using namespace std;
void swap(int &ix,int &iy);

int main()
{
                int ix,iy;
 
cout<<"Enter 2 integers:";
cin>>ix>>iy;
cout<<"\nIntegers:";
cout<<"\na="<<ix<<"\nb="<<iy;
swap(ix,iy);
cout<<"\nAfter swapping";
cout<<"\na="<<ix<<"\nb="<<iy;

return 0;
}
void swap(int &a,int &b)
{
int temp;
temp=a;
a=b;
b=temp;
}

