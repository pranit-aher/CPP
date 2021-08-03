/* 
**Name :- Pranit Aher.
**Created On:- Aug 2,2021, 11.00 AM.
######################################################################### 
Define class student which shows the information about the Student using
constructor and destructor - Include the following members
Data Members
1. Name of the Student
2. Roll No
3. Address
4. Percentage
Member functions
1. To assign initial values
2. To accept the values from user.
3. To display all data to user including Grade by using following conditions
a. Per>=70 Distinction
b. Per <70 and Per >=60 First Class
c. Per<60 and Per>=40 Second class
d. Per<40 Student is Fail
 */
#include<iostream>
using namespace std;

class Student
{

  char name[20], address[20];
  int roll_no=0;
  float per=0.0;
  
 public:
  void Student1();
  void showData();
};

void Student::Student1()
{
    cout<<"\n Enter the info of student\n 1.Roll_No.\t2.Name\t3.Address\t4.Percentage:  \n";
    cin>>roll_no;
    cin>>name;
    cin>>address;
    cin>>per;
    
    
 }
 
void Student::showData() 
{
    cout<<"\nRoll_No: "<<roll_no<<"\tName: "<<name<<"\tAddress: "<<address<<"\tPercentage: "<<per;
    cout<<"\nGrade of student is : ";
  
 if(per>=70)
 {
  cout<<" Grade A";
 }
 else if(per>=60 && per<70)
 {
  cout<<" First Class";
 } 
 
 else if(per>=40 && per<60)
 {
  cout<<" Second Class";
 } 
 
 else
 {
  cout<<" Fail";
 } 
 
}

int main()
{
 Student s;
 s.Student1();
 s.showData();
 return 0;
}
