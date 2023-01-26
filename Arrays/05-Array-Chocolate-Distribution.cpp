// Chocolate Distribution Problem 

// Time  Complexity : O(nlogn)
// Space Complexity : O(1)

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        
        sort(a.begin(),a.end());
        
        long long diff = INT_MAX ; 
        
        long long start = 0, end = m - 1 ;
        
        while(end < a.size()){
            long long curr_diff = a[end] - a[start] ; 
            diff = min(curr_diff,diff);
            start++;
            end++;
        }
        
        return diff;
    
    }   
};