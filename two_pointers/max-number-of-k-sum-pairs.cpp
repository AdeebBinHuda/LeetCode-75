#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());

        int beg=0;
        int end= nums.size()-1;
        int count=0;

    while(beg<end){
        int sum=nums[beg]+nums[end];
        if(sum==k){
            count++;
            beg++;
            end--;
        }
        else if(sum>k){
            end--;
        }
        else{
            beg++;
        }
    }
    return count;
    }
};

int main(){
    Solution sol;
    vector<int> nums ={3,2,4,3,5,3,3,7,4};
    int k=6;
    cout<<sol.maxOperations(nums,k);
    return 0;
}
