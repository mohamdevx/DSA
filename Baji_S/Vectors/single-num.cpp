#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int res = 0;
        for(int val : nums)
        {
            res ^= val;
        }
        return res;
    }
};
int main()
{
       
    vector<int> nums = {4, 1, 2, 1, 2};
    Solution obj;
    cout << obj.singleNumber(nums) << endl;
    

    return 0;
}