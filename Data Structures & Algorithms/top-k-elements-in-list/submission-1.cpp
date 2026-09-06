class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        vector<int>ans;
        unordered_map<int,int>mp;

        for(int x:nums)
        {
            mp[x]++;
        }

        vector<vector<int>>bucket(nums.size()+1);

        for(auto it:mp)
        {
            bucket[it.second].push_back(it.first);
        }
        for(int i=bucket.size()-1;i>=0;i--)
        {
            for(int x:bucket[i])
            {
                ans.push_back(x);

                if(ans.size()==k)
                {
                    return ans;
                }
            }
        }

    }
};
