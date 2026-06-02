// 1.Two Sum
//        https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int j,i;
        vector<int> v(2);
        int n=nums.size();
    
    for(i=0;i<n;i++)
    {
        
        for(j=i+1;j<n;j++)
        {
            if(nums[i]+nums[j]==target)
            {
               v[0]=i;
               v[1]=j;
              return v;
            }
            
           
        }
    } return v;
        
    }
};
