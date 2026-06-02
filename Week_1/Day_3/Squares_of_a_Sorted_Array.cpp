//Squares of a Sorted Array
//https://leetcode.com/problems/squares-of-a-sorted-array/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        
        int left = 0;
        int right = n - 1;
        
        // Fill the result array from back to front
        for (int i = n - 1; i >= 0; i--) {
            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];
            
            if (leftSquare > rightSquare) {
                ans[i] = leftSquare;
                left++; // Move the left pointer forward
            } else {
                ans[i] = rightSquare;
                right--; // Move the right pointer backward
            }
        }
        
        return ans;
    }
};

                                                                                                                                                                                       } 
                                                                                                                                                                                                return false;
                                                                                                                                                                                                      
                                                                                                                                                                                                          }
                                                                                                                                                                                                          };
                                                                                                                                                                                                          
