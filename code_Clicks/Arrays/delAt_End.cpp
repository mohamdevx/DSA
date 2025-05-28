#include <iostream>
using namespace std;

int main(){
    int array[10], n;

    cout << "Enter size of array:\n";
    cin >> n;
    cout << "Enter array element:\n";
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    n--; // decrease size to remove the last element

    cout << "n after deletion: " << n << endl; // Debug output
    cout << "Array elements are:\n";

    for (int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    
    return 0;
}