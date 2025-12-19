class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();

        int maxCandy = 0;

        for (int candy : candies) {
            if (candy > maxCandy) {
                maxCandy = candy;
            }
        }

        vector<bool> result(n);
        for (int i = 0; i < n; i++) {
            if (candies[i] + extraCandies >= maxCandy) {
                result[i] = true;
            } else {
                result[i] = false;
            }
        }
        return result;
    }
};

/*
take the array

take the max

vector<bool>res(size)
// compare
for(){
if(cnadies[i]+ extracandies>=max)
   true

else
    false
}
return res
*/