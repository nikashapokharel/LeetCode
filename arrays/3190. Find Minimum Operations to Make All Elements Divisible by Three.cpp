#include <iostream>
#include <vector>
using namespace std;

/* Key idea: Every operation is just subtracting or adding 1 from each of the elements till we 
reach the nearest multiple of 3. If the value of the element modulo 3 is 1, we subtract 1. If it's 2, we add 1. */

class Solution {
public:
    int minimumOperations(vector<int>& nums)
    {
        int count = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            while(nums[i]% 3 != 0)
            {
                if(nums[i] % 3 ==1)
                {
                    nums[i] = nums[i] -1;
                    count++;
                }
                else if(nums[i] % 3 == 2)
                {
                    nums[i] = nums[i] + 1;
                    count++;
                }
            }
        }
        return count;
    }

};