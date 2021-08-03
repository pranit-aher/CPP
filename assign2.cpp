/*
Created by:- Pranit Aher.
Created On:- Aug 02,2021 10.15 AM
################################## 
Create a class Team as follows with following data members such as,
Accept 5 different records in array and display the records as follows:
Country
Player
Matches
################################
*/

#include <iostream>
using namespace std;
class CountryName
{
public:
 char Country_Name[20];

 public:
 void getData()
 {
   cout<<"\nEnter the names of countries:  ";
   cin>>Country_Name[20];
 }
 
 void showData()
 {
   cout<<"\n names of countries:  "<<Country_Name[20];
 
 }
};

class PlayerName
{
 char Player_Name[20];

 public:
 void getData()
 {
   cout<<"\nEnter the names of player:  ";
   cin>>Player_Name[20];
 }
};


int main()
{ int n;
cout<<"\nEnter the number of countries:  ";
cin>>n;
CountryName cn[n];


for(int i=1;i<=n;i++)
{
cin>>cn[i].Country_Name;
 
}

for(int i=1;i<=n;i++)
{
cout<<"\n"<<cn[i].Country_Name;
 
}
}

