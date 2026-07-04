#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> transformArray(vector<int>& nums) 
    {
        int number_of_0 = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] % 2 == 0)
            {
                nums[i] = 0;
                number_of_0 = number_of_0 + 1; 
            }
            else
            {
                nums[i] = 1;
            }
        }
        
        for(int j = 0; j < nums.size(); j++)
        {
            if(j < number_of_0)
            {
                nums[j] = 0;
            }
            else
            {
                nums[j] = 1;
            }
        }

        return nums;
    }
};