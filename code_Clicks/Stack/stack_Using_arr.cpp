#include <iostream>
using namespace std;
int stack[5],top=-1,n=5;

void push(int x)
{
     if(top==n-1)
     {
        cout<<"Stack is full\n";
     }
     else 
     {
        top++;
        stack[top]=x;
    
    }
}
void pop()
{
    if(top==-1)
    cout<<"Stack is empty\n";
    else
    {
        cout<<"Popped element is "<<stack[top]<<endl;
        top--;
    }
}

void display(){
if (top>=0)
{
    cout<<"Stack elements are:\n";
    for (int i=top;i>=0;i--)
    {
        cout<<stack[i]<<endl;
    }
}
else
{
    cout<<"Stack is empty\n";
}
}
int peek()
{
    if (top == -1)v
    {
        cout << "Stack is empty\n";
        return -1;
    }
    else
    {
        return stack[top];
    }
}

int main()
{
    push(3);
    push(5);
    push(7);
    display();

    int y = peek();
    cout<<"Top element is: "<<y<<endl;


    // pop();
    // pop();
    // pop();
    // display();
    

  

    return 0;
}

