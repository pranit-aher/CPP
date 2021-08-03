#include "iostream"
using namespace std;
int main()
{
 int a,b,t;
 cout<<"Enter values for a & b to be swapped: ";
 cin>>a>>b;
 t=a;
 a=b;
 b=t;
 cout<<"\n After Swapping  a="<<a<<"  b="<<b;
 return 0;
}
