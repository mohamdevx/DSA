#include <iostream>
using namespace std;

int LinearSearch(int arr[], int sz, int target)  // Fixed function name from 'LinerSearch' to 'LinearSearch'
{
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;  // Target not found
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = sizeof(arr) / sizeof(arr[0]); // Correct size calculation
    int target = 5;

    int result = LinearSearch(arr, sz, target); // Store the result

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}
