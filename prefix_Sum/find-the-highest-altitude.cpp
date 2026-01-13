#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int prefix=0; 
       int highestAltitude=0;
      
       for(int i=0; i<gain.size();i++){
         // take the value of all of the added values and compare them and then the the highest values
          prefix += gain[i];
         if(prefix >highestAltitude){
            highestAltitude = prefix;
         }
       }
       return highestAltitude;
    }
};


int main(){
    Solution sol;
vector<int>gain={-5,1,5,-4,3,2,-7};
cout<<sol.largestAltitude(gain);
return 0;
}