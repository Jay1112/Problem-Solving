// Find the Sum of Maximum and Minimum in the Array -> GfG

// Time  Complexity : O(n)
// Space Complexity : O(1)

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int maximum = *max_element(A,A+N);
    	int minimum = *min_element(A,A+N);
    	
    	int sum = minimum + maximum ;
    	return sum ;
    }

};
