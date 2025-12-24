#include<iostream>
using namespace std;

class Demo
{
    public:
       void  Display()
       {
          cout<<"Inside the Demo display";     
       }
       
};

int main()
{
    Demo dobj;
    
    cout<<sizeof(dobj);

    return 0;
}