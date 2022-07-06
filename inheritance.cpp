#include<iostream>
#include<stdio.h>
using namespace std;

class base
{
 public:
 void display()
    {
        cout<<"base class"<<endl;
    }
//    base()
//     {
//         cout<<"base class constructor called"<<endl;
//     }      
};
class child:public base
{
    public: 
    void display()
    {
        cout<<"child class"<<endl;
    }
     child()
    {
        cout<<"child class constructor called"<<endl;
    }
};
int main()
{
    child c;
    // c.display();
    return 0;
}
