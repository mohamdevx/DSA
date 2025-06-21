#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0, ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (freq == 0) {  // Use equality comparison, not assignment
                ans = nums[i];
            }
            if (ans == nums[i]) {
                freq++;
            } else {
                freq--;
            }
        }
        return ans;
    }
};

int main() {
    // Example test
    Solution sol;
    vector<int> nums = {3, 3, 4, 2, 3, 3};
    cout << "Majority element: " << sol.majorityElement(nums) << endl;
    return 0;
}