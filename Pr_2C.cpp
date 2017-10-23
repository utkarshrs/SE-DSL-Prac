/*
Practical No: 02
Title		: 
		
Class		: SE Computer Engineering
Roll No		: 39
Batch		: C
Start Date	:04/07/2017
End Date	:11/07/17
*/

#include"iostream"
using namespace std;

struct magazine
{
   char str[10];
}com[6];

int main()
{
  int i,j,k;
  cout<<"Enter names of member\n";
  
  for(i=0;i<6;i++)
  {

     cin>>com[i].str;

  }  
  cout<<"\t\npossibal combination:nCr=n!/(n-r)!*r!ssss\n";
  for(i=0;i<4;i++)
  {
   for(j=i+1;j<5;j++)
   {
    for(k=j+1;k<6;k++)
    {
       cout<<"  "<<com[i].str;
       cout<<"  "<<com[j].str;
       cout<<"  "<<com[k].str<<"\n\t";
    }
   }
  }
   return 0;
}
/******** OUTPUT
Enter names of member
Nikita
Aboli
Meghana
Sunita
Pratik
Sauraabh
	
possibal combination:nCr=n!/(n-r)!*r!ssss
  Nikita  Aboli  Meghana
	  Nikita  Aboli  Sunita
	  Nikita  Aboli  Pratik
	  Nikita  Aboli  Sauraabh
	  Nikita  Meghana  Sunita
	  Nikita  Meghana  Pratik
	  Nikita  Meghana  Sauraabh
	  Nikita  Sunita  Pratik
	  Nikita  Sunita  Sauraabh
	  Nikita  Pratik  Sauraabh
	  Aboli  Meghana  Sunita
	  Aboli  Meghana  Pratik
	  Aboli  Meghana  Sauraabh
	  Aboli  Sunita  Pratik
	  Aboli  Sunita  Sauraabh
	  Aboli  Pratik  Sauraabh
	  Meghana  Sunita  Pratik
	  Meghana  Sunita  Sauraab
	  Meghana  Pratik  Sauraabh
	  Sunita  Pratik  Sauraabh       
*/

