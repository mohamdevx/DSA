#include <iostream>
using namespace std;

void reverseArray(int arr[], int sz)
{
    int start = 0, end = sz - 1;
    while (start < end)  // ✅ Corrected condition
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int sz = 7;  // Only reversing first 7 elements

    reverseArray(arr, sz);

    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
