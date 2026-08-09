#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> output;
        for(int i = 0; i < nums1.size(); i++)
        {
            for(int j = 0; j < nums2.size(); j++)
            {
                if(nums1[i]== nums2[j] && find(output.begin(), output.end(), nums1[i]) == output.end())
                {
                    output.push_back(nums1[i]);
                }
            }
        }
        return output;    
    }
};