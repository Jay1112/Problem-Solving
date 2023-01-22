// Maximum SubArray Sum -> LeetCode

// Time  Complexity : O(n)
// Space Complexity : O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int end_sum = 0 ; 
        int max_sum = INT_MIN ; 
        for(int i=0;i<nums.size();i++){
            end_sum = end_sum + nums[i] ;
            max_sum = max(max_sum,end_sum) ;
            if(end_sum < 0){
                end_sum = 0;
            }
        }
        return max_sum ; 
    }
};