// Naive Solution: Using Linear Serach
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int max = 0;
        int ans;
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i]>max)
            {
                max = arr[i];
                ans = i;
            }
        }
        return ans;
    }
};


// Best Solution: Using Binary Search
