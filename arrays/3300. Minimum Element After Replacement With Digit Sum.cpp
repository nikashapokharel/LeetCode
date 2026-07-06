#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minElement(vector<int>& nums)
    {
        for (int i = 0; i < nums.size(); i++) 
        {
            int num = nums[i];
            int sum = 0;
            while (num > 0) 
            {
                sum += num % 10;  // get last digit
                num /= 10;        
            }
            nums[i] = sum;  // replace element with digit sum
        }
        int min_val = nums[0];
        for(int j = 0; j < nums.size(); j++)
        {
            if(nums[j] < min_val)
            {
                min_val = nums[j];
            }
        }
        return min_val;
    }
};