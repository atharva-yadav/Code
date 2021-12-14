// Naive Solution: Using nested for loops

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {        
        vector<int> v;
        for(int i = 0; i < nums.size(); i++)
        {            
            for(int j = i+1; j < nums.size(); j++)
            {                   
                if (nums[i] + nums[j] == target )
                {
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
        }
        return v;
     }
};

// Optimized Solution: Using Hash Table

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map <int, int> m;

        for(int i = 0; i < nums.size(); i++)
        {
            if(m.find(target-nums[i]) != m.end())
            {
                ans.push_back(m[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }

            m[nums[i]] = i;
        }
        return ans;
    }
};
