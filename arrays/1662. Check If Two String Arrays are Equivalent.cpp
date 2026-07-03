#include <iostream>
#include <vector>
using namespace std;

/* Key idea: Set up two for loops that iterate through both arrays and concatenates the elements. 
Then, compare the result from the two loops. 
If they are equal, return true. Otherwise, return false.*/

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2)
    {
        string word_one;
        string word_two;

        for(int i = 0; i < word1.size(); i++)
        {
            word_one = word_one + word1[i];
        }
        for(int j = 0; j < word2.size(); j++)
        {
            word_two = word_two + word2[j];
        }

        if(word_one == word_two)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};