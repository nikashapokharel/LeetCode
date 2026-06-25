#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) 
    {
        vector<int> reverse;
        vector<int> ans;

        // adding elements of nums in reverse

        for(int i = nums.size() - 1; i >= 0; i--)
        {
            reverse.push_back(nums[i]);
        }

        //first half of array ans is filled with nums
        for(int i = 0; i < nums.size(); i++)
        {
            ans.push_back(nums[i]);
        }

        // second half filled with reverse;
        for(int i = 0; i < nums.size(); i++)
        {
            ans.push_back(reverse[i]);
        }
    
        return ans;
    }
};