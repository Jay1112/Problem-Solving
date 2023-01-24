// Contains Duplicate in Array

// Time  Complexity : O(n)
// Space Complexity : O(1)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> data ; 
        for(int i=0;i<nums.size();i++){
            int value = nums[i];
            if(data.count(value) > 0){
                return true;
            }else{
                 data[value] = 1;
            }
        }
        return false;
    }
};