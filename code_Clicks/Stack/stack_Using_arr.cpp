#include <iostream>
using namespace std;
int stack[5],n=5,top=-1;
void push(int x)
{

    if(top==n-1)
    {
        cout<<"Stack is full"<<endl;
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
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"The popped element is "<<stack[top]<<endl;
        top--;
    }

}
void display()
{
    if(top>=0)
    {
        cout<<"Stack elements are:\n";
        for(int i=top;i>=0;i--)
        {
            cout<<stack[i]<<endl;
        }
        cout<<endl;
    }
    else
    {
        cout<<"Stack is empty"<<endl;
    }
}
int peek()
{
    return stack[top];

}
int main(){

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
  
    // display();
    // pop(); 
    // pop();
    // pop();
    // pop();
    // pop();
    // display();
    // display();
    int y=peek();
    cout<<"Top element is: "<<y<<endl;
    return 0;


}