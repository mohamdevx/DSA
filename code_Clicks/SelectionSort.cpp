#include <iostream>
using namespace std;

int arr[5]={9, 4, 7, 1, 5},n=5;
void SelectionSort(){
for (int i=0;i<n-1;i++){
    int min=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min])
        {
            min=j;
        }
    }
    if(min!=i){
       
    
    int temp=arr[min];
    arr[min]=arr[i];
    arr[i]=temp;
}}


}

int main() {
    cout<<"Before:\n";
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
    SelectionSort();
    cout<<"After:\n";
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
    return 0;




}
//bigO for selection sort is O(n^2) because it has two nested loops  