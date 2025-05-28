#include <iostream>
#include <vector>
#include <algorithm>  // for sort
using namespace std;

int majorityElement(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());

    // Frequency count: the array is sorted, so consecutive equal numbers indicate frequency.
    int freq = 1;
    int ans = nums[0];

    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1]) {
            freq++;
        } else {
            freq = 1;
            ans = nums[i];
        }
        if (freq > n / 2) {
            return ans;
        }
    }
    return ans;  // This returns ans if no element crosses n/2 (assuming a majority element exists).
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};  // Example input
    int maj = majorityElement(nums);
    cout << "Majority element is: " << maj << endl;
    return 0;
}