class Solution {
public:
    bool isPalindrome(string s) {
        
        string temp;

        for(char c: s)
        {
            if(isalnum(c))
            {
                temp.push_back(tolower(c));
            }
        }
        string rev=temp;
        reverse(rev.begin(),rev.end());
        
        if(temp == rev)
        {
            return true;
        }
        return false;
    }
};
