class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        deque<int>dp;
        for(int i=0;i<nums.size();i++)
        {
            // remove the front wheen window is moved:
            while(!dp.empty() && dp.front()<=i-k)
            {
                dp.pop_front();
            }
            // remove from back when grater elmt comes:
            while(!dp.empty() && nums[dp.back()]<=nums[i])
            {
                dp.pop_back();
            }
            // adding index to back of deque:
            dp.push_back(i);
            // window isready take the max:
            if(i>=k-1)
            {
                ans.push_back(nums[dp.front()]);
            }
        }
        return ans;
    }
};
