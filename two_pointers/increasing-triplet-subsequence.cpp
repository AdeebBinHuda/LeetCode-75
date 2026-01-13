#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {

        if(nums.size()<3){
            return false;
        }

        int a= INT_MAX;
        int b= INT_MAX;
        for(int num:nums){
            if(num<=a){
                a=num;
            }
            else if(num<=b){
                b=num;
            }
            else{
                return true;
            }
        }
        return false;
     /* bool flag=false;
        for(int i=0;i<nums.size()-2;i++){
            for(int j=0;j<nums.size()-1;j++){
                for(int k=0;k<nums.size();k++){
                  if(nums[i]<nums[j]<nums[k]){
                    flag=true;
                   
                  }
                }
            }
        }
        if(flag==true){
            return true;
           
            }
            else{
                return false;
                }//return false;*/
    }
};

int main(){
    Solution sol;
    vector<int>nums={5,1,3,4,2,6,7,8};
    cout<<sol.increasingTriplet(nums);
    return 0;
}