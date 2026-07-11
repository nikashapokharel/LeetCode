#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) 
    {
        int result = -1;
        for (int i = 0; i < arr.size(); i++) 
        {
            int count = 0;
            for (int j = 0; j < arr.size(); j++) 
            {
                if (arr[j] == arr[i]) 
                {
                    count++;
                }
            }
            if (count == arr[i] && arr[i] > result) 
            {
                result = arr[i];
            }
        }
        return result;
    }
};