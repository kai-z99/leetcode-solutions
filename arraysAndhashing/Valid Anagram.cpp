class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
        {
            return false;
        }

        int alphabet[26] = {0};

        for (char c : s)
        {
            alphabet[c - 'a'] += 1;
        }

        for (char c : t)
        {
            alphabet[c - 'a'] -= 1;
        }

        for (int x : alphabet)
        {
            if (x != 0)
            {
                return false;
            }
        }

        return true;




    }
};