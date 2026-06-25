#include <iostream>
#include <vector>
using namespace std;

/* Key idea: Every operation is just subtracting 1 from the sum of the elements till we reach the nearest multiple of k.
I set up a count variable and a sum variable. Then, I set up a while loop that keeps subtracting 1 from the sum until it's divisible by k. */

class Solution {
public:
    int minOperations(vector<int>& nums, int k) 
    {
        int count = 0;
        int sum = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            sum = sum + nums[i];
        }
        while(sum % k != 0)
        {
            sum--;
            count++;
        }
        return count;
    }
};
