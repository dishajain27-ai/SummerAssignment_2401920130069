//Container With Most Water
//https://leetcode.com/problems/container-with-most-water/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0;
        int left = 0;
        int right = height.size() - 1;
        
        while (left < right) {
            // Calculate current width and height
            int width = right - left;
            int current_height = min(height[left], height[right]);
            
            // Calculate current area and update max_water if it's larger
            int current_water = current_height * width;
            max_water = max(max_water, current_water);
            
            // Move the pointer pointing to the shorter line inward
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        
        return max_water;
    }
};
