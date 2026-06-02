//53. Maximum Subarray
//https://leetcode.com/problems/maximum-subarray/description/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = nums[0]; // Shuruat me pehle element ko hi max maan lo
        
        for (int num : nums) {
            sum += num; // Element ko current sum me add karo
            
            maxi = max(maxi, sum); // Agar naya bada sum mila toh update karo
            
            // Agar sum bohot dukh de raha hai (negative ho gaya), 
            // toh use chhod kar 0 se naya safar shuru karo
            if (sum < 0) {
                sum = 0;
            }
        }
        
        return maxi;
    }
};
