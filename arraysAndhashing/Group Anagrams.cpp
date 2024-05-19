class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> mp;
        std::string sorted;
        std::vector<std::vector<string>> ans;


        for (int i = 0; i < strs.size(); i++)
        {
            sorted = strs[i];
            std::sort(sorted.begin(), sorted.end());

            if (mp.find(sorted) == mp.end())
            {
                mp[sorted] = {strs[i]};
            }

            else
            {
                mp[sorted].push_back(strs[i]);
            }
            
        }

        for (auto pair : mp)
        {
            std::vector<std::string> group;
            
            for (auto x : pair.second)
            {
                group.push_back(x);
            }

            ans.push_back(group);
        }

        return ans;
    }
};
