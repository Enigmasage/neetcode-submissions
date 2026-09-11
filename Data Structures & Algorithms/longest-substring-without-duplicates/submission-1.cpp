class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi=0;
        int left=0;
        unordered_set<char>seen;
        for(int right=0;right<s.size();right++)
        {
            while(seen.count(s[right]))
                {
                    seen.erase(s[left]);
                    left++;
                }
                seen.insert(s[right]);
                maxi=max(maxi,right-left+1);
        }
        return maxi; 
    }
};
