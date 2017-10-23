/*

Prac. No : 03
Title 	 : A magic square is an n * n matrix of the integers 1 to n2such that the sum of each row,     		
           column, and diagonal is the same. The figure given below is an example of magic square for 
	       case n=5. In this example, the common sum is 65. Write C/C++ Program for magic square.
Class	 : SE Comp
Roll No	 : 39
Batch    : C
Start Date: 11/07/2017
End Date  : 18/07/2017

*/


#include<iostream>	
#include<string.h>
using namespace std;


void magic_Square(int n)   // function to create odd sized magic squares
{
    int i,j,num; 
    int magicSq[n][n];		    
    i = j = num = 0;	  
  
    for(i=0; i<n; i++)
    {
       for(j=0; j<n; j++)
       {
          magicSq[i][j] = 0;
       }
    }
	    
    i = n/2;  
    j = n-1;
 
		   
    for (num = 1; num <= n*n; num++)	
    {
        if (i == -1 && j == n)  // if i > total_Rows & j > total_Cols
        {
            j = n-2;
            i = 0;
        }
        else if(j == n)
        {
            j = 0;		//if next number goes to out of square's column range
        }
        else if (i < 0)         //if next number is goes to out of square's Row range
        {    		
            i = n-1;
                
        }        
        else if(magicSq[i][j])   //if there is already an element
        {
            j = j - 2;
            i = i + 1;            
        }
        else
        {
        }       
            
        magicSq[i][j] = num;     //Enter number in Magic Square
        
 	
 	i = i - 1;
        j = j + 1;  
         		
    }
 
    cout<<"\n\n\t The Magic Square of size: "<<n;
    cout<<"\n\t Sum of each row/column/diagonal: "<<(n*(n*n+1)/2);
            
    cout<<"\n\n\t Magic Square ("<<n<<"*"<<n<<"):\n";     
    for(i=0; i<n; i++)
    {
        cout<<"\n\t";
        for(j=0; j<n; j++)
        {
            cout<<"  "<<magicSq[i][j];           
        }
    }
}

int main()
{
    int n;
    
    cout<<"\n\n ***** To generate Magic Square *****";
    cout<<"\n\n\t Enter no of Row/Column: ";
    cin>>n;
    
    magic_Square(n);
    
    cout<<"\n\n";
    
    return 0;
}


/*----------------OUTPUT-----------------------

student@IOE-L1LAB:~$ g++ Pr_3C.cpp -o a
student@IOE-L1LAB:~$ ./a


 ***** To generate Magic Square *****

	 Enter no of Row/Column: 3


	 The Magic Square of size: 3
	 Sum of each row/column/diagonal: 15

	 Magic Square (3*3):

	  2  7  6
	  9  5  1
	  4  3  8

student@IOE-L1LAB:~$ ./a


 ***** To generate Magic Square *****

	 Enter no of Row/Column: 5


	 The Magic Square of size: 5
	 Sum of each row/column/diagonal: 65

	 Magic Square (5*5):

	  9  3  22  16  15
	  2  21  20  14  8
	  25  19  13  7  1
	  18  12  6  5  24
	  11  10  4  23  17

student@IOE-L1LAB:~$ ./a


 ***** To generate Magic Square *****

	 Enter no of Row/Column: 7


	 The Magic Square of size: 7
	 Sum of each row/column/diagonal: 175

	 Magic Square (7*7):

	  20  12  4  45  37  29  28
	  11  3  44  36  35  27  19
	  2  43  42  34  26  18  10
	  49  41  33  25  17  9  1
	  40  32  24  16  8  7  48
	  31  23  15  14  6  47  39
	  22  21  13  5  46  38  30

student@IOE-L1LAB:~$ 

-----------------------------------------------*/
