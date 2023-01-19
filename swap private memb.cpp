#include<iostream>
#include<conio.h>

using namespace std;
 
class abc;

class xyz

{
    private:

        int a;

    public:

        void getdata()

        {
            cout<<"Enter the value of a : ";
           cin>>a;

        }

        void putdata()

        {
            cout<<"a :- "<<a<<endl;

        }

        friend void swap(abc &,xyz &);

};

class abc

{
    private:

        int x;

    public:

        void getdata()

        {
            cout<<"Enter the value of x :- ";
            cin>>x;
        }

        void putdata()

        {
            cout<<"x :- "<<x<<endl;
        }

        friend void swap(abc &o1,xyz &o2)

        {

           int t;

            t=o1.x;

            o1.x=o2.a;

            o2.a=t;

        }

};

int main()

{

    abc ob1;

    xyz ob2;

    ob1.getdata();

    ob2.getdata();

   cout<<"BEFORE SWAPPING :- "<<endl;

    ob1.putdata();

    ob2.putdata();

    swap(ob1,ob2);

    cout<<"AFTER SWAPPING :- "<<endl;

    ob1.putdata();

    ob2.putdata();

    return 0;

}

