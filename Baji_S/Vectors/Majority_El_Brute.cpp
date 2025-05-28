#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for (int val : nums) {
            int freq = 0;
            for (int el : nums) {
                if (el == val) {
                    freq++;
                }
            }
            if (freq > n / 2) { 
                return val;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    // Example test input: majority element is 3
    vector<int> nums = {3, 3, 4, 2, 3, 3};

    int majority = sol.majorityElement(nums);
    if (majority != -1) {
        cout << "Majority element is: " << majority << endl;
    } else {
        cout << "No majority element found." << endl;
    }
    return 0;
}