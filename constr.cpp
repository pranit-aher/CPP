/* 
**Name :- Pranit Aher.
**Created On:- Aug 2,2021, 9.00 AM.
#####################################
Implementation of Constructor
#####################################
*/
#include<iostream>
using namespace std;
class A
{
 public:
// void show();
 A();
 A(int);
 A(int, int);
};

/* void A:: show()
{
 cout<<"\nThis show of A";
}*/

A::A()
{
 cout<<"\n 0 arg constructor of A";
}

A::A(int a)
{
 cout<<"\n 1 arg constructor of A";
 cout<<"\n a= "<<a<<"\n";
}

A::A(int a, int b)
{
 cout<<"\n 2 arg constructor of A";
 cout<<"\n a= "<<a<<"b= "<<b<<"\n";
}

int main()
{
 A obj, obja1(10),obja2(30,50);
// obj.show();
 
}
