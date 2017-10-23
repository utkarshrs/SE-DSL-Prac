/*
Implement C++ program for expression conversion as infix to postfix and its evaluation
using stack based on given conditions
i. Operands and operator, both must be single character.
ii. Input Postfix expression must be in a desired format.
iii. Only '+', '-', '*' and '/ ' operators are expected.

Class:SE Computer
Roll no:39
Batch:C
Started on:29/8/17
Completed on:3/9/17
*/

# include<iostream>
using namespace std;

class stack
{
    char st[20],in[20],po[20];
    int TOP,k;
public:
    stack()
    {
        TOP=-1;
        k=0;
    }
    void infixToPostfix();
    void evaluate();
private:
    void push(char);
    char pop();
    int precedence(char);
};  

void stack::push(char ch)
{
    if(TOP==19) 
    {
        cout<<"Stack overflow"<<endl;
    }
    else
    {
        TOP++;
        st[TOP]=ch;
    }
}

char stack::pop()
{
    if(TOP==-1)
    {
        cout<<"Stack underflow"<<endl;
        return 0;
    }
    else
    {
        int m=st[TOP];
        TOP--;
        return m;
    }
}

void stack::evaluate()
{
    cout<<"The postfix expression is"<<endl<<po<<endl;;
    int a,b,res,temp;
    TOP=-1;
    for(int i=0;po[i]!='\0';i++)
    {
        if(isdigit(po[i])==1)
        {
            push(po[i]-'0');
        }
        else 
        {
            a=pop();
            b=pop();
            switch(po[i])
            {
                case '+': res=b+a;
                        break;
                case '-': res=b-a;
                        break;
                case '*': res=b*a;
                        break;
                case '/': res=b/a;
                        break;
            }
            push(res);  
        }
    }
    temp=pop();
    cout<<"The answer is "<<temp<<endl;
}

void stack::infixToPostfix()
{
    int m;
    char left='(',right=')';
    cout<<"Enter infix expression"<<endl;       
    cin>>in;
    for(int i=0;in[i]!='\0';i++)        //if operand add it to postfix
    {
        if(isalpha(in[i])==1 || isdigit(in[i]==1))
        {
            po[k]=in[i];
            k++;
        }
        else if(in[i]==left)        //if left parenthesis then push it to stack;
        {
            push(left);
        }
        else if(in[i]==right)       //if right parenthesis encountered then pop from stack until left parenthesis
        {
            while((m=pop())!=left)
            {
                po[k]=m;
                k++;    
            }
        }
        else            //if operator is encounterd pop from the stack the operands having equal or higher precedence
        {
            while(precedence(st[TOP])>=precedence(in[i]))
            {
                int m=pop();
                po[k]=m;
                k++;
            }
            push(in[i]);    
        }
    }
    while(TOP>=0)
    {
        po[k]=pop();
        k++;
    }
    po[k]='\0';
    cout<<"The postfix expression is"<<endl;
    cout<<po;
}

int stack::precedence(char ch)
{
    if(ch=='+' || ch=='-')
    {
        return 1;
    }
    else if(ch=='*' || ch=='/')
   {
        return 2;
    }
    else if(ch=='(')
    {
        return 0;
    }
}

int main()
{
    stack s;
    int op;
    do
    {
        cout<<"\n____________________________"<<endl;
        cout<<"1 Postfix to infix conversion"<<endl;    
        cout<<"2 Evaluation of postfix"<<endl;
        cout<<"3 Exit"<<endl;
        cout<<"______________________________"<<endl;
        cin>>op;
        switch(op)
        {
            case 1: s.infixToPostfix();
                break;
            case 2: s.evaluate();
                break;
            case 3:break;
            default: cout<<"Enter correct option"<<endl;
        }
    }while(op!=3);
    return 0;
}

/*
student@IOE-L1LAB:~$ gedit prg8.cpp
student@IOE-L1LAB:~$ g++ prg8.cpp
student@IOE-L1LAB:~$ ./a.out

____________________________
1 Postfix to infix conversion
2 Evaluation of postfix
3 Exit
______________________________
1
Enter infix expression
(a+b)*(c\d)*(a-b)
The postfix expression is
ab+cd\*ab-*
*/

