
#include <iostream>
using namespace std;
 

void findLargest(int* arr, int N)
{
 
   
    for (int i = 1; i < N; i++) {
 
       
        if (*arr < *(arr + i)) {
            *arr = *(arr + i);
        }
    }
 
    
    cout <<"Largest No. is : "<< *arr;
}
 

int main()
{
    int N = 4;
    int* arr;
 
   
    arr = new int[N];
 
   
    
    if (arr == NULL) {
        cout << "No memory allocated";
    }
 
    cout<<"Enter 1st NO.: ";
    cin>>*(arr + 0);
    cout<<"Enter 2nd NO.: ";
    cin>>*(arr + 1);
    cout<<"Enter 3rd NO.: ";
    cin>>*(arr + 2);
    cout<<"Enter 4th NO.: ";
    cin>>*(arr + 3);
 
   
    findLargest(arr, N);
    return 0;
}
