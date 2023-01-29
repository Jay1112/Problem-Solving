// Next Permutation -> LeetCode

// Time  Complexity : O(n)
// Space Complexity : O(1)

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind1 = nums.size() - 2 ;
        while(ind1 >= 0 && nums[ind1] >= nums[ind1+1]){
            ind1--;
        }

        if(ind1 < 0){
            reverse(nums.begin(),nums.end());
            return ; 
        }

        int ind2 = nums.size() - 1 ; 
        while(ind2 > ind1 && nums[ind1] >= nums[ind2]){
            ind2--;
        }
        swap(nums[ind1],nums[ind2]);
        reverse(nums.begin() + ind1 + 1, nums.end());
    }
};