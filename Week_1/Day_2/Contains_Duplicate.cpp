//2. Contains Duplicate
//https://leetcode.com/problems/contains-duplicate/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       int j,i;
        
        int n=nums.size();
    
        for(i=0;i<n;i++)
        {
        
            for(j=i+1;j<n;j++)
            {
                if(nums[i]==nums[j])
                {
               return true;
                }
                
            }
         } 
         return false;
      
    }
};
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       int j,i;
        
        int n=nums.size();
    
        for(i=0;i<n;i++)
        {
        
            for(j=i+1;j<n;j++)
            {
                if(nums[i]==nums[j])
                {
               return true;
                }
                
            }
         } 
         return false;
      
    }
};
