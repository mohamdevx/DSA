#include <iostream>
using namespace std;

int main(){
    int array[10], n, x, i;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(i = 0; i < n; i++){
        cin >> array[i];
    }

    cout << "Enter a number to search in array: ";
    cin >> x; // Read the search element

    for(i = 0; i < n; i++){
        if(array[i] == x){
            cout << "Element found at index " << i;
            break;
        }
    }
    
    if(i == n){
        cout << "Element not found";
    }

    return 0;
}