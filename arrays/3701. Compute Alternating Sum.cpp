#include <iostream>
#include <vector>
using namespace std;

/*Key idea: set up a for loop and two conditional statements. If the index is divisible by 2, add the element.
Otherwise, subtract.*/

class Solution {
public:
    int alternatingSum(vector<int>& nums)
    {
        int sum= 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(i % 2 == 0)
            {
                sum = sum + nums[i];
            }
            else if(i % 2 != 0)
            {
                sum = sum - nums[i];
            }
        }

        return sum;
    }
};
