/*
Start
  ↓
Input: string s
  ↓
Trim leading and trailing spaces (optional in some languages)
  ↓
Split s into list of words
     → Use split() which by default removes extra spaces
     → Example: "  hello   world  " → ["hello", "world"]
  ↓
Reverse the list of words
     → Now: ["world", "hello"]
  ↓
Join the words with a single space " "
     → "world hello"
  ↓
Return the result string
  ↓
End */

class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        stringstream ss(s);
        string word;

        while(ss>>word){
            words.push_back(word);
        }

        reverse(words.begin(),words.end());
        string result;
        for(int i=0;i<words.size();i++){
            
                result+=words[i];
            if(i<words.size()-1)
                result+=" ";
        }
        return result;
    }
};