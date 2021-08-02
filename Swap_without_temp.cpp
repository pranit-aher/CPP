/*
Created By:- Pranit Aher.
Created On: Aug 02, 2021. @ 05.25 PM.

#####################################
Program to swap(interchange) 2,3,4 values without Temporary variable.
#####################################
*/ 

#include <iostream>
using namespace std;
class Swap
{
 int num,a,b,c,d;
 
 public:
 void getData()
 {
  cout<<"Enter how much values you want to Swap (2,3,4 Only): ";
  cin>>num;
  
  if(num==2)
  { 
  
   cout<<"Enter 2 values to be swapped: ";
   cin>>a>>b;
  }
  
  else if(num==3)
  { 
  
   cout<<"Enter 3 values to be swapped: ";
   cin>>a>>b>>c;
  }
  
   else if(num==4)
  { 
  
   cout<<"Enter 4 values to be swapped: ";
   cin>>a>>b>>c>>d;
  }
  
  else
  {
   cout<<"You Entered Wrong choice.";
  }
  
  showData();
 }
 
 void showData()
 {
  if(num==2){
  cout<<"Before Swapping, 1st value= "<<a<<"\t2nd value= "<<b;
  a=a+b;
  b=a-b;
  a=a-b;
  cout<<"\nAfter Swapping, 1st value= "<<a<<"\t2nd value= "<<b;
 }
 
  else if(num==3){
  cout<<"Before Swapping, 1st value= "<<a<<"\t2nd value= "<<b<<"\t3rd value= "<<c;
  a=a+b+c;
  b=a-b-c;
  c=a-b-c;
  a=a-b-c;
  cout<<"\nAfter Swapping, 1st value= "<<a<<"\t2nd value= "<<b<<"\t3rd value= "<<c;
 }
 
 else if(num==4){
  cout<<"Before Swapping, 1st value= "<<a<<"\t2nd value= "<<b<<"\t3rd value= "<<c<<"\t4th value= "<<d;
  a=a+b+c+d;
  b=a-b-c-d;
  c=a-b-c-d;
  d=a-b-c-d;
  a=a-b-c-d;
  cout<<"\nAfter Swapping, 1st value= "<<a<<"\t2nd value= "<<b<<"\t3rd value= "<<c<<"\t4th value= "<<d;
 }
 
};

int main()
{ 
 Swap s;
 s.getData();
 return 0;
}
