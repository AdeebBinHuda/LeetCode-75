class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;

        // Calculate the sum of the first window
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        int max_sum = sum;

        // Slide the window
        for (int i = k; i < n; i++) {
            sum = sum - nums[i - k] + nums[i];
            max_sum = max(max_sum, sum);
        }

        return (double)max_sum / k;
    }
};