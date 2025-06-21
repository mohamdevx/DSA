#include <iostream>
using namespace std;

int main() {
    int array[10], size, temp;
    cout << "Enter size of array\n";
    cin >> size;
    cout << "Enter array elements\n";
    for (int i = 0; i < size; i++){
        cin >> array[i];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if(array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    cout << "Sorted array is\n";
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    
    return 0;
}