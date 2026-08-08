#include <iostream>
#include <vector>       
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits)
    {
        for(int i = digits.size() - 1; i >= 0; i--)
        {
        if(digits[i] != 9)
        {
            digits[i] = digits[i] + 1;
            return digits;
        }
        else
        {
            digits[i] = 0;
        }
        }
        // loop ended and all digits were 9, now all 0s
        digits.insert(digits.begin(), 1);
        return digits;   
    }
};