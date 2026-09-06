class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        

        int slow=0;
        int fast=0;
        // tells that loop exist and we are inside it !!
        do
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);

        // tells this is the START of the cycle
        slow=0;
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};
