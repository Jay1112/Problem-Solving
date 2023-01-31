// find Repeat and Missing Number in an array -> InterviewBit

// Time  Complexity : O(n)
// Space Complexity : O(1)

vector<int> Solution::repeatedNumber(const vector<int> &A) {
        long long sum = 0 ; 
        long long sq_sum = 0 ; 
        
        for(long long i=0;i<A.size();i++){
            sum = sum + (i + 1);
            sum = sum - (long long)A[i] ;
            
            sq_sum = sq_sum + ((i+1)*(i+1));
            sq_sum = sq_sum - ((long long)A[i]*(long long)A[i]);
        }
        
        long long temp = sq_sum / sum ; // temp : A + B, sum : A - B
        
        long long repeat = (temp + sum) / 2 ;
        long long missing = temp - repeat ; 
        
        vector<int> res; 
        res.push_back(missing); 
        res.push_back(repeat);

        
        return res;
}
