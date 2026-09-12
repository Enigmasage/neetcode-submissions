class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;

        for(int i=0;i<nums.size()-k+1;i++)
        {
            int maxi=nums[i];
            for(int j=i;j<i+k;j++)
            {
                maxi=max(nums[j],maxi);
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};
