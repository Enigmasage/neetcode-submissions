class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0;
        int maxfeq=0;
        int maxwindow=0;
        vector<int>feq(26,0);

        for(int right=0;right<s.size();right++)
        {
            feq[s[right]-'A']++;
            int window = right-left+1;
            maxfeq=max(maxfeq,feq[s[right]-'A']);
            if(window-maxfeq>k)
            {
                feq[s[left]-'A']--;
                left++;
            }
            window=right-left+1;
            maxwindow=max(window,maxwindow); 
        }
        return maxwindow;  
    }
};
