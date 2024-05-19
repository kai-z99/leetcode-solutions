class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int diff;
        std::unordered_map<int,int> mp;

        for (int i = 0; i < nums.size(); i++)
        {
            diff = target - nums[i];

            if (mp.find(diff) != mp.end())
            {
                return {i, mp[diff]};
            }

            mp[nums[i]] = i;
        }

        return {0,0};
    }
    
};