#include <iostream>
#include <vector>
using namespace std;

/*  Key idea: set up a nested for loop where the outer loop keeps track of the element being check and the inner loop compares each element to the variable.*/

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums)
    {
        vector <int> result;
        int count = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            int check_val = nums[i];
            for(int j = 0; j < nums.size(); j++)
            {
                if(nums[j] < check_val)
                {
                count = count + 1;
                }
            }
            result.push_back(count);
            count = 0;
        }
        return result;
    }
};
