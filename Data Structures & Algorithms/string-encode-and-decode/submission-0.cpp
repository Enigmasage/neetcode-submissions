class Solution {
public:
// 5#hello6#helloo
    string encode(vector<string>& strs) {

        string ans;
        for( string s: strs)
        {
            ans+= to_string(s.size())+"#"+s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        
        int i=0;
        vector<string>ans;

        while(i<s.size()){

            int j=i;
            while(s[j]!='#')
            {
                j++;
            }
            int n=stoi(s.substr(i,j-i));
            i=j+1;
            ans.push_back(s.substr(i,n));
            
            i+=n;
        }
        return ans;
    }
};
