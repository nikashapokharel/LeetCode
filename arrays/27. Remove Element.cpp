#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val)
    {
        // key idea: Set up 2 pointers, first one traverses the whole array while the second one points to elements that are not val. Everytime an element is not val, we add that element to the index pointed by the second pointer and increment that pointer. Lastly, return the second pointer.
        
       int k = 0;
       for(int i = 0; i < nums.size(); i++)
       {
            if(nums[i] != val)
            {
                nums[k]= nums[i];
                k++;
            }
       } 
       return k;
    }
};