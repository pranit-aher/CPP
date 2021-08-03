/*
 
 Name :- Pranit Aher.
 Created On:- Aug 3,2021 10.00 AM
 ########################################
Write a Program to implement a sphere class with appropriate members
and
member function to find the surface area and the volume.
(Surface = 4 π r2 and Volume = 4/ 3 π r3)
#########################################
*/
#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES
using namespace std;
class Sphere
{
 double surface,volume,r;
 public:
 void srfVol()
 {
   cout<<"Enter the radius: ";
   cin>>r;
   
   surface=4*M_PI*r*r;
   cout<<"Surface area of sphere is: "<<surface;
   
   volume=1.33*M_PI*r*r*r;
   
   cout<<"\nVolume of sphere is: "<<volume;
 }
};

int main()
{
  Sphere s;
  s.srfVol();
  return 0;
}

