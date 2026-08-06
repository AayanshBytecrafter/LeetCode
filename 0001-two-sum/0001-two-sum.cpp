class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int n = nums.size();
        // vector<int> ans;
        for(int i = 0; i<n; i++)
        {
            int need = target - nums[i];
            if(mp.contains(need))
            {
                return {mp[need], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};