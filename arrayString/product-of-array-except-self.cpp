#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>px(n,1);
        vector<int>sx(n,1);
        
        for(int i = 1; i < n; ++i) {
            px[i]=px[i-1]*nums[i-1];
        }
        for(int i = n-2;i>=0 ; --i) {
            sx[i]=sx[i+1]*nums[i+1];
        }
        vector<int>ans(n);
        for(int i=0;i<n;++i){
            ans[i]=px[i]*sx[i];
        }    
            return ans;
    }
};
int main(){
    Solution sol;
    vector<int>nums={1,2,3,4};
    vector<int>result=sol.productExceptSelf(nums);
    for(int val: result){
        cout<<val<<" ";
    }
    return 0;
}