// Trapping Rain Water -> LeetCode

// Time  Complexity : O(n)
// Space Complexity : O(n)

class Solution {
public:

    vector<int> rightSideGreatestElement(vector<int> height){
        int n = height.size() ;
        vector<int> res(n,0);
        int maxi = INT_MIN ;
        for(int i=n-1;i>=0;i--){
            if(i == n-1){
                res[i] = -1 ;
            }else{
                res[i] = max(maxi,height[i+1]);
                maxi = res[i];
            }
        }
        return res;
    }

    vector<int> leftSideGreatestElement(vector<int> height){
        int n = height.size() ;
        vector<int> res(n,0);
        int maxi = INT_MIN ;
        for(int i=0;i<n;i++){
            if(i == 0){
                res[i] = -1 ;
            }else{
                res[i] = max(maxi,height[i-1]);
                maxi = res[i];
            }
        }
        return res;
    }

    int trap(vector<int>& height) {
        vector<int> left   = leftSideGreatestElement(height);
        vector<int> right  = rightSideGreatestElement(height);

        int total = 0 ;

        for(int i=0;i<height.size();i++){
            int curr_height  = height[i] ; 

            if(left[i] == -1 || right[i] == -1){
                continue ;
            }

            int contains = 0;
            if(left[i] > curr_height && right[i] > curr_height){
                contains = min(left[i],right[i]) - curr_height;
            }
            total = total + contains;
        } 

        return total;
    }
};