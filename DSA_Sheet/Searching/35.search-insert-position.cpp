/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        while(start<end){
            int mid=start+(end-start)/2;
            if(target==nums[mid]) return mid;
            if(target>nums[mid]) start=mid+1;
            else end=mid-1;
        }
        int mid=start+(end-start)/2;
        if(target>nums[mid]) return mid+1;
        else return mid;
        return 0;
    }
};
// @lc code=end

