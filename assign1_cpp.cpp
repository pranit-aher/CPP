/*
Created by:- Pranit Aher.
Created On:- 02 August 2021 10∶00∶52 AM
###########################################
Create the following classes and write their appropriate class members and
display proper information to user.
a) Time b) Date c) Person d) Student

##########################################
*/

#include <iostream>
using namespace std;
class Student
{
 char name[20];
 int age;
 public:
   void getData()
   {
     cout<<"Enter the name of student: ";
     cin>>name;
 
     cout<<"\nEnter the age of student: ";
     cin>>age;
   }
 
   void showData()
   {
    cout<<"\nName of student is: "<<name;
    cout<<"\nAge of student is: "<<age<<"\n";
   }
};

class Person
{
 char name[20];
 int age;
 public:
   void getData()
   {
     cout<<\n"Enter the name of Person: ";
     cin>>name;
 
     cout<<"\nEnter the age of Person: ";
     cin>>age;
   }
 
   void showData()
   {
    cout<<"\nName of person is: "<<name;
    cout<<"\nAge of person is: "<<age<<"\n";
   }
};
int main()
{
 Student s;
 s.getData();
 s.showData();
 
 Person p;
 p.getData();
 p.showData();
 return 0;
}
