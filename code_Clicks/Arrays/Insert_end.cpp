#include <iostream>
using namespace std;


int main(){

    int array[10],n,x,i;
cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter array elemetn:\n";
    for( i=0;i<n;i++){
        cin>>array[i];
    }

    cout<<"Enter element to insert at the end of the array:\n";
    cin>>x;
    array[i]=x;
    n++;

    cout<<"Array after insertion:\n";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }





    return 0;
}