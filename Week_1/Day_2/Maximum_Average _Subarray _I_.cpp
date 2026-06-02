//3. Maximum Average Subarray I
//https://leetcode.com/problems/maximum-average-subarray-i/
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double current_sum = 0;
        
        // Step 1: Compute the sum of the first 'k' elements
        for (int i = 0; i < k; i++) {
            current_sum += nums[i];
        }
        
        double max_sum = current_sum;
        
        // Step 2: Slide the window across the rest of the array
        for (int i = k; i < nums.size(); i++) {
            current_sum += nums[i] - nums[i - k];
            max_sum = max(max_sum, current_sum);
        }
        
        // Step 3: Return the maximum average
        return max_sum / k;
    }
};
