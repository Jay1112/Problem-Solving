// Reverse the Array -> GfG

// Time  Complexity : O(n)
// Space Complexity : O(1)

void reverseArray(int arr[])
{
    int length = arr.size() ;
    for(int i=0;i<length/2;i++){
        swap(arr[i],arr[length-1-i]);
    }
}
