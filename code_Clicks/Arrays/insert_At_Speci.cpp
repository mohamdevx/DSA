#include<iostream>
using namespace std;    

int main() {

    int array[10], n, pos, x;

    cout << "Enter size of Array" << endl;
    cin >> n;
    cout << "Enter array elements" << endl;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << "Enter the insertion location" << endl;
    cin >> pos;
    cout << "enter the value to insert" << endl;
    cin >> x;

    for (int i = n - 1; i >= pos - 1; i--) {
        array[i + 1] = array[i];
    }
    array[pos - 1] = x;
    n++;

    cout << "Array after insertion" << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
        }
    return 0;
}