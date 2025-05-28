#include <iostream>
using namespace std;
//iterative way
int arr[100], n, x;  // Renamed array to arr

int BinarySearch(int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;  // Prevents integer overflow
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] > x) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    cout << "Enter size of array: " << endl;
    cin >> n;
    cout << "Enter elements of array in ascending order: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Updated variable name
    }

    cout << "Enter a number to search in array: " << endl;
    cin >> x;

    int result = BinarySearch(0, n - 1);
    if (result == -1) {
        cout << x << " is not present in array" << endl;
    } else {
        cout << x << " is present at index " << result << endl;
    }

    return 0;
}
