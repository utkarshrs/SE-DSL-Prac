/*
A classic problem that can be solved by backtracking is called the Eight Queens problem,
which comes from the game of chess. The chess board consists of 64 square arranged in an
8 by 8 grid. The board normally alternates between black and white square, but this is not
relevant for the present problem. The queen can move as far as she wants in any direction,
as long as she follows a straight line, Vertically, horizontally, or diagonally. Write C++
program with recursive function for generating all possible configurations for 4-queen's
problem.
Class :SE computer 
started on:8/9/2017
completed on:15/9/2017
Roll no: 46
Batch:C
*/

#include<iostream>
using namespace std;
class queen
{
    int n;
public:
    void read()
    {
        cout<<"Enter board size\n";
        cin>>n;
    }
    bool place(int x[10],int k)
    {
        for(int i=1;i<k;i++)
        {
            if(x[i] == x[k] || i+x[i] == k+x[k] || i-x[i] == k-x[k])
                return false;
        }
        return true;
    }
    void nqueen()
    {
        int x[10];
        int k=1;
        x[k]=0;
        while(k!=0)
        {
            x[k]++;
            while((!place(x,k))&&(x[k]<=n))x[k]++;

        if(x[k]<=n)
        {
            if(k == n)
            {
            	 cout<<"Solution \n";
                print(x);
                cout<<endl;
            }
            else
            {
                k++;
                x[k]=0;
            }
        }
        else
            k--;
        }
    }
    void print(int x[10])
    {
        char c[10][10];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
                c[i][j]='0';
        }
        for(int i=1;i<=n;i++)
        {
            c[i][x[i]]='1';
        }

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
                cout<<c[i][j]<<"\t";
                cout<<endl<<endl;
        }
        cout<<endl;
    }
};
int main()
{
    queen A;
    A.read();
    A.nqueen();
    return 0;
}




/*
o/p.........................
student@IOE-L1LAB:~$ gedit pr9.cpp
student@IOE-L1LAB:~$ g++ pr9.cpp
student@IOE-L1LAB:~$ ./a.out
Enter board size
4
Solution 
0	1	0	0	

0	0	0	1	

1	0	0	0	

0	0	1	0	



Solution 
0	0	1	0	

1	0	0	0	

0	0	0	1	

0	1	0	0	

*/

