#include <iostream>
#include <vector>
using namespace std;


/*Key idea: I go through each number in the array one by one (outer loop).
For each number, I check the whole array again (inner loop) to count how many times it shows up.
If I find that a number appears exactly 2 times, that means it's one of the repeated ones,
so I add it to the result (making sure I don't add the same number twice).*/

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums)
    {
        vector<int> result;
        int check;
        for(int i = 0; i < nums.size(); i++)
        {
            int count =0;
            check = nums[i];
            for (int j = 0; j < nums.size(); j++)
            {
                if(check == nums[j])
                {
                    count++;
                }   
            }
            if (count == 2)
            {
                bool already = false;
                
                for (int k = 0; k < result.size(); k++)
                {
                    if (result[k] == nums[i])
                    {
                        already = true;
                        break;
                    }
                }
                if (!already)
                {
                    result.push_back(nums[i]);
                }
            }
        }
        return result;
    }
};