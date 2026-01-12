class Solution {
public:
int maxArea(vector<int>& height) {
    int left= 0;
    int right= height.size()-1;
    int maximum=0;

    while(left<right){
        int val= min(height[left],height[right])*(right-left);
        maximum= max(val,maximum);

        if(height[left]<height[right]){
            left++;
        }
        else{
            right--;
        }
    }
  return maximum;

/*
// time limit exceeded   n*2
    int maxArea(vector<int>& height) {
       
        int maximum=0;
        for(int i=0;i<height.size();i++){
        
            for(int j=i+1;j<height.size();j++){
              int  val= min(height[i],height[j])*(j-i);
             
                if(val>maximum){
                    maximum=val;
                }
            }
        }
        return maximum;*/
    }
};