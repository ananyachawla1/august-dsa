class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int ans=-1;
        int high=n-1;
        while(low<=high)
        {   
            int mid=floor(high+low)/2;
            if(target==nums[mid]){
                ans=mid;
            return ans;
            break;
            }
            else if(target>nums[mid])
            low=mid+1;
            else if(target<nums[mid])
            high=mid-1;
            else
            return-1;
            
        }
        return ans;
        
    }
};