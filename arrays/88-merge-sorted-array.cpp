#include <iostream>
#include <vector>
using namespace std;


/*Key idea: Start filling the nums1 array from the end, comparing the last elements of nums1 and nums2, and 
placing the larger one at the end of nums1. This way, we can avoid overwriting any elements in nums1 
that we haven't processed yet.*/

class Solution {
public:
    
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while(j >= 0)
        {
            if(i >=0 && nums1[i] > nums2[j])
            {
                nums1[k]= nums1[i];
                i--;
            }
            else
            {
                nums1[k]= nums2[j];
                j--;
            }
            k--;
        }
    }
};