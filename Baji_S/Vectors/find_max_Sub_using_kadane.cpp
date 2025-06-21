#include <iostream>
#include <vector>
#include <climits>  // For INT_MIN

using namespace std;

// Function to find the maximum subarray sum using Kadane's Algorithm
int MaxSubArray(vector<int> &nums) {
    int currSum = 0, maxSum = INT_MIN;

    for (int val : nums) {
        currSum += val;
        maxSum = max(currSum, maxSum);
        if (currSum < 0) {
            currSum = 0;
        }
    }
    return maxSum;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};  // Example array

    // Call the function and print the result
    cout << "Maximum Subarray Sum: " << MaxSubArray(nums) << endl;

    return 0;
}
