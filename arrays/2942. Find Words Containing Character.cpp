#include <iostream>
#include <vector>
using namespace std;

/*Key Idea: Loop through the word array and loop through every word to check if the character is in the word.*/

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) 
    {
        string word;
        vector<int> indices;
       for(int i = 0; i < words.size(); i++)
       {
            word = words[i];
            bool has_char = false;
            for(int j = 0; j < word.size(); j++)
            {
                if(word[j] == x)
                {
                    has_char = true;
                    break;
                }
            }
            if(has_char == true)
            {
                indices.push_back(i);
            }
       }
       return indices; 
    }
};