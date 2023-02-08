// Product of All elements except self -> LeetCode

// Time  Complexity : O(n)
// Space Complexity : O(n)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long n = nums.size() ; 
        vector<long long> prefix(n,0);
        vector<long long> suffix(n,0);
        vector<int> result(n,0);

        for(int i=0;i<n;i++){
            if(i == 0){
                prefix[i] = nums[i] ; 
            }else{
                prefix[i] = prefix[i-1] * nums[i];
            }
        }

        for(int i=n-1;i>=0;i--){
            if(i == n-1){
                suffix[i] = nums[i] ; 
            }else{
                suffix[i] = suffix[i+1] * nums[i];
            }
        }

        for(int i=0;i<n;i++){
            if(i == 0){
                result[i] = suffix[i+1] ; 
            }else if(i == n - 1){
                result[i] = prefix[i-1] ;
            }else{
                result[i] = prefix[i-1] * suffix[i+1];
            }
        }

        return result;
    }
};