class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> mp;
        
        for(int i = 0; i < n ; ++i)
        {
            if(mp.find(target - nums[i]) != mp.end())
            {
                ans = {i, mp[target - nums[i]]};
                return ans;
            }
            else
                mp[nums[i]] = i;
        }
        return ans;
    }
};
