#include<iostream>
 using namespace std;

class second;
class first
{
int x;
public:
friend void max(first,second);
}f;
class second
{
int y;
public:
friend void max(first,second);
}s;
void max(first x,second y)
{
x.x=20;
y.y=10;
cout<<"\nFirst no: "<<x.x;
cout<<"\nSecond no: "<<y.y;
if(x.x>y.y)
{
cout<<"\n "<<x.x<<" is greater";
}
else if (x.x==y.y)
{
cout<<"\n "<<x.x <<" "<<y.y<<" is same";
}
else
{
	cout<<y.y<<"is greater";
}
}
int main()
{
max(f,s);
return 0;
}
