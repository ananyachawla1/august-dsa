class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=0;

        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(target==nums[mid])
            {
                ans=mid;
             return ans;
            break;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else 
            high=mid-1;
        }
        return low;
    }
};