#include <iostream>
using namespace std;

const int n = 5; // define array size

int arr[n] = {9, 4, 7, 1, 5};

void insertionSort() {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        // Shift elements greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // insert key in correct position
    }
}

void print() {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    cout << "Before:\n";
    print();

    insertionSort();

    cout << "After:\n";
    print();

    return 0;
}
