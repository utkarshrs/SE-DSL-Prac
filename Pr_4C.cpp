/*

Pr No		: 04
Title		: Write C++ program for string operations- copy, concatenate, check substring, equal, reverse
		  and length
Class		: SE Computer Engineering
Batch		: C  
Roll No		: 39
Started On	: 18/07/2017
Completed On: 25/07/2017
		
*/


#include<iostream>
using namespace std;

void str_length();         //Global Functions declarations
void str_copy();
void str_concat();
void str_reverse();
void str_palindrome();
void str_compare();
void sub_string();

char str1[10];             //Global Variables
char str2[10];


int main()
{
   int ch;
   char ans;
   
   do
   {
      cout<<"\n\n ****Operations On String****";
      cout<<"\n 1. String Length";
      cout<<"\n 2. String Copy";
      cout<<"\n 3. String Concatenation";
      cout<<"\n 4. String Reverse";
      cout<<"\n 5. String Palindrome";
      cout<<"\n 6. String Compare";      
      cout<<"\n 7. Sub-String";   
      
      cout<<"\n\n\t Enter your Choice: ";
      cin>>ch;
      
      switch(ch)
      {
         case 1:    str_length();
		    break;
		    
	 case 2:    str_copy();
		    break;
		    
	 case 3:    str_concat();
		    break;
		    
	 case 4:    str_reverse();
		    break;
		    
	 case 5:    str_palindrome();
		    break;

	 case 6:    str_compare();
		    break;

	 case 7:    sub_string();
		    break;
		    
	default:    cout<<"\n\n\t You've entered Wrong Choice!!!";
      }

      cout<<"\n\n\t Do you want to continue? (y/n) : ";
      cin>>ans;
   }while(ans == 'y');
      
   cout<<"\n\n";
   
   return 0;
}


void str_length()          //Function Defination for String Length
{
    int i;
    
    cout<<"\n\n Enter the String: ";
    cin>>str1;
    
    i=0;
    while(str1[i] != '\0')
        i++;
        
    cout<<"\n\n\t Length of String: "<<i;
        
}


void str_copy()            //Function Defination for Copy String
{
    int i;
    
    cout<<"\n\n Enter the String: ";
    cin>>str1;
    
    i=0;
    while(str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    
    cout<<"\n\n\t New Copied string: "<<str2;
    
}


void str_concat()          //Function Defination for String Concatenation
{
    int i,j;
    
    cout<<"\n\n Enter the String 1: ";
    cin>>str1;
    
    cout<<"\n\n Enter the String 2: ";
    cin>>str2;
    
    cout<<"\n\n\t First String is: "<<str1;
    cout<<"\n\n\t Second String is: "<<str2;    
        
    i=0;
    while(str1[i] != '\0')
    {
        i++;
    }
    
    j = 0;
    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        j++;
        i++;
    }
    str1[i] = '\0';
    
    cout<<"\n\n\t Concatenated String: "<<str1;
}


void str_palindrome()      //Function Defination for Palindrome
{
   int i,j,flag = 0;
    
   cout<<"\n\n Enter the String: ";
   cin>>str1;
    
   cout<<"\n\n\t Given String is: "<<str1;

     
   i=0;                    //Reversing String
   while(str1[i] != '\0')
   {
        i++;
   }
    
   j = 0;
   i = i-1;
   while(i >= 0)
   {
        str2[j] = str1[i];
        j++;
        i--;
   }
   str2[j] = '\0';
    
   cout<<"\n\n\t Reverse String is: "<<str2;
   
   
   for(i=0; str1[i] != '\0'; i++)    //Comparing strings
   {
         if(str1[i] != str2[i])
         {
            flag = 1;
            break;
         }
   }
   if(flag == 1)
       cout<<"\n\n\t String is Not Palindrome!!!";
   else
       cout<<"\n\n\t String is Palindrome!!!";   
   
}


void str_reverse()         //Function Defination for Reversing String
{
   int i,j;
   
   cout<<"\n\n Enter the String: ";
   cin>>str1;
    
   cout<<"\n\n\t Given String is: "<<str1;

        
   i=0;
   while(str1[i] != '\0')
   {
        i++;
   }
    
   j = 0;
   i = i-1;
   while(i >= 0)
   {
        str2[j] = str1[i];
        j++;
        i--;
   }
   str2[j] = '\0';
    
   cout<<"\n\n\t Reverse String is: "<<str2;

}


void str_compare()         //Function Defination for Comparing strings
{
   int i,j,len1,len2,flag = 0;
   
   cout<<"\n\n Enter the String 1: ";
   cin>>str1;
    
   cout<<"\n\n Enter the String 2: ";
   cin>>str2;
    
   cout<<"\n\n\t First String is: "<<str1;
   cout<<"\n\n\t Second String is: "<<str2;    

        
   i = 0;
   while(str1[i] != '\0')
         i++;
         
   j = 0;
   while(str2[j] != '\0')
         j++;       
         
   len1 = i;
   len2 = j;        
   
   if(len1 == len2)
   {
      for(i=0; str1[i] != '\0'; i++)
      {
         if(str1[i] != str2[i])
         {
            flag = 1;
            break;
         }
      }
      if(flag == 1)
         cout<<"\n\n\t Strings are Not Equal!!!";
      else
         cout<<"\n\n\t Strings are Equal!!!";   
   }
   else
   {
      cout<<"\n\n\t Strings are Not Equal!!!";
   }
}


void sub_string()          //Function Defination for Sub-String
{
    int i,j,flag = 0;
    
    cout<<"\n\n Enter the Main String: ";
    cin>>str1;
    
    cout<<"\n\n Enter the Sub-String: ";
    cin>>str2;
    
    j = 0;
    for(i=0; str1[i] != '\0'; i++)
    {
       if(str1[i] == str2[j])
       {      
           while(str2[j] != '\0')                               
           {
              i++;
              j++;
              if(str1[i] == str2[j])
              {
                 i++;
                 j++;              
              }     
              else
              {
                 flag = 1;
                 break;
              }
           }   
        }
    }                 
    if(flag == 1)
       cout<<"\n\n\t String "<<str2<<" is not Sub-string of "<<str1;
    else
       cout<<"\n\n\t String "<<str2<<" is a Sub-string of "<<str1;   
    
}


/*------------------------------OUTPUT----------------------------

student@IOE-L1LAB:~$ g++ Pr_4C.cpp -o a
student@IOE-L1LAB:~$ ./a


 ****Operations On String****
 1. String Length
 2. String Copy
 3. String Concatenation
 4. String Reverse
 5. String Palindrome
 6. String Compare
 7. Sub-String

	 Enter your Choice: 1


 Enter the String: Welcome


	 Length of String: 7

	 Do you want to continue? (y/n) : y


 ****Operations On String****
 1. String Length
 2. String Copy
 3. String Concatenation
 4. String Reverse
 5. String Palindrome
 6. String Compare
 7. Sub-String

	 Enter your Choice: 2


 Enter the String: Hello


	 New Copied string: Hello

	 Do you want to continue? (y/n) : y


 ****Operations On String****
 1. String Length
 2. String Copy
 3. String Concatenation
 4. String Reverse
 5. String Palindrome
 6. String Compare
 7. Sub-String

	 Enter your Choice: 3


 Enter the String 1: Wel


 Enter the String 2: come


	 First String is: Wel

	 Second String is: come

	 Concatenated String: Welcome

	 Do you want to continue? (y/n) : y


 ****Operations On String****
 1. String Length
 2. String Copy
 3. String Concatenation
 4. String Reverse
 5. String Palindrome
 6. String Compare
 7. Sub-String

	 Enter your Choice: 4


 Enter the String: Hello


	 Given String is: Hello

	 Reverse String is: olleH

	 Do you want to continue? (y/n) : y


 ****Operations On String****
 1. String Length
 2. String Copy
 3. String Concatenation
 4. String Reverse
 5. String Palindrome
 6. String Compare
 7. Sub-String

	 Enter your Choice: 5


 Enter the String: madam


	 Given String is: madam

	 Reverse String is: madam

	 String is Palindrome!!!

	 Do you want to continue? (y/n) : y


 ****Operations On String****
 1. String Length
 2. String Copy
 3. String Concatenation
 4. String Reverse
 5. String Palindrome
 6. String Compare
 7. Sub-String

	 Enter your Choice: 5


 Enter the String: hello


	 Given String is: hello

	 Reverse String is: olleh

	 String is Not Palindrome!!!

	 Do you want to continue? (y/n) : y


 ****Operations On String****
 1. String Length
 2. String Copy
 3. String Concatenation
 4. String Reverse
 5. String Palindrome
 6. String Compare
 7. Sub-String

	 Enter your Choice: 6


 Enter the String 1: hello


 Enter the String 2: hello


	 First String is: hello

	 Second String is: hello

	 Strings are Equal!!!

	 Do you want to continue? (y/n) : y


 ****Operations On String****
 1. String Length
 2. String Copy
 3. String Concatenation
 4. String Reverse
 5. String Palindrome
 6. String Compare
 7. Sub-String

	 Enter your Choice: 6


 Enter the String 1: hello 


 Enter the String 2: madam


	 First String is: hello

	 Second String is: madam

	 Strings are Not Equal!!!

	 Do you want to continue? (y/n) : y


 ****Operations On String****
 1. String Length
 2. String Copy
 3. String Concatenation
 4. String Reverse
 5. String Palindrome
 6. String Compare
 7. Sub-String

	 Enter your Choice: 7


 Enter the Main String: welcome


 Enter the Sub-String: come


	 String come is a Sub-string of welcome

	 Do you want to continue? (y/n) : y


 ****Operations On String****
 1. String Length
 2. String Copy
 3. String Concatenation
 4. String Reverse
 5. String Palindrome
 6. String Compare
 7. Sub-String

	 Enter your Choice: 8


	 You've entered Wrong Choice!!!

	 Do you want to continue? (y/n) : n


student@IOE-L1LAB:~$

-----------------------------------------------------------------*/
