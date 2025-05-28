#include <iostream>
using namespace std;


int main(){

    //delte elemnt in array form start
    int array[10],n;
    cout<<"Eneter size of array: \n";
cin>>n;
cout<<"Enter array elemnts: \n";

for(int i=0; i<n; i++){
    cin>>array[i];
}
for (int i=0; i<n; i++){
    array[i]=array[i+1];
}
n--;

cout<<"Array after deletion: \n";
for (int i=0; i<n; i++){
    cout<<array[i]<<" ";
}

    return 0;
}