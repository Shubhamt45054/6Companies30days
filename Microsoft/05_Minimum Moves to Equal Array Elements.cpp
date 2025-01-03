//  https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/description/

// Mathematically, the median of a list L minimizes the sum of the absolute differences from each element of L.
// The mean minimizes the sum of the squared differences from each element of L.

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
         int avg=nums[(n/2)];
         int ans=0;
         for(int i=0;i<n;i++){
            ans+=abs(avg-nums[i]);
         }
         return ans;
    }
};
