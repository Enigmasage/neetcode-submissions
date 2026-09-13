class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int comp=target-numbers[i];
            if(mp.find(comp)!=mp.end())
            {
                return {mp[comp]+1,i+1};
            }
            mp[numbers[i]]=i;
    
        }
        return {};
    }
};
