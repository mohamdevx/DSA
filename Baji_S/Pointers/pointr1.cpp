#include<iostream>
using namespace std;

void changeA(int &b)
{
    b=20;
}
int main()
{
int a =10;
changeA(a);

cout<<"inside main functoin "<<a<<endl;


    return 0;
}