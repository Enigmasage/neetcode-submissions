class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        vector<int>ans;
        unordered_map<int,int>mp;

        for(int x:nums)
        {
            mp[x]++;
        }

        for(int i=0;i<k;i++)
        {
            int maxnum=0;
            int maxfeq=0;

            for(auto it:mp)
            {
                if(it.second>maxfeq)
                {
                    maxfeq=it.second;
                    maxnum=it.first;
                }
            }
            ans.push_back(maxnum);
            mp.erase(maxnum);
        }
       return ans;
    }
};
