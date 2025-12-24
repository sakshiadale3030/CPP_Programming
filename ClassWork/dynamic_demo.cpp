#include<iostream>
using namespace std;

int main()

{
 int length = 0;
 int *Arr = NULL;

 cout<<"Enter the number of elements : \n";
 cin>>length;
 
 // step1 : allocate the memory
 Arr = new int[length];
 if(Arr == NULL)
 {
    cout<<"Unable to allocate the memory";
 }
 else
 {
    cout<<"Memory gets successfully allocate";
 }

 // step 2 : use the logic

 //step 2 : dellocate the memory
 delete [] Arr;

 return 0;

}
