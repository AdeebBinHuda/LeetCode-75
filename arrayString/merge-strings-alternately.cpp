#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) { 
    /*
      int i = 0, j = 0;
       string result="";
    // Alternate characters while both strings have characters
    while (i < word1.length() && j < word2.length()) {
        result += word1[i++];
        result += word2[j++];
    }
    
    // Append remaining characters from word1, if any
    while (i < word1.length()) {
        result += word1[i++];
    }
    
    // Append remaining characters from word2, if any
    while (j < word2.length()) {
        result += word2[j++];
    }
    
    return result;*/
    string result="";
    int i=0,j=0;
    while(i<word1.length() && j<word2.length()){
        result+= word1[i++];
        result+= word2[j++];
    }
    while(i<word1.length()){
        result+=word1[i++];
    }
while(j<word2.length()){
        result+=word2[j++];
    }
    return result;
    }
};

int main(){
    Solution sol;
    string word1="abc";
    string word2="pqrstu";
    cout<<sol.mergeAlternately(word1,word2);
    return 0;
}