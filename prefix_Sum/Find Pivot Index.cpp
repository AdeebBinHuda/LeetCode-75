class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lsum=0;
        int flag= 0;
        int pivot= -1;
        int n= nums.size();

        for(int i=0;i<n;i++){
            pivot = i;
            int rsum=0;
            if(i>=1){
                lsum += nums[i-1];
            }

            for(int j=i+1;j<n;j++){
                rsum +=nums[j];
            }
            if(rsum == lsum){
                flag= 1;
                return pivot;
            }
        }
        return (flag== -1)?pivot:-1;
    }
};