// Kth Largest Element in Array -> LeetCode

// Time  Complexity : O(nlogn)
// Space Complexity : O(n)

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(auto item : nums){
            pq.push(item);
        }

        int top = INT_MIN ;
        while(k--){
            int element = pq.top(); 
            pq.pop();
            top = element ;
        }

        return top;
    }
};