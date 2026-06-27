#include <iostream>
#include <vector>
using namespace std;

/* Key Idea: Set up a nested loop where the outer loop has a variable 
that keeps track of the elements in the order array and the inner loop 
compares the variable to each element in the friends array. 
If the element matches with the variable, insert it to the returning array.*/

class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) 
    {
        vector<int> returning_array;
        int check_order;
        for(int i = 0; i < order.size(); i++)
        {
            check_order= order[i];
            for(int j = 0; j < friends.size(); j++)
            {
                if(check_order == friends[j])
                {
                    returning_array.push_back(friends[j]);
                }
            }
        }
        return returning_array;
    }
};