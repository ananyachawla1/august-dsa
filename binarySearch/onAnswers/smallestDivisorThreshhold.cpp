class Solution {
public:
    bool chk(vector<int> &nums, int threshold, int mid){
        int sum = 0;
        for(auto i: nums){
            sum += ceil(1.0*i/mid);
        }

        if(sum<=threshold) return true;
        return false;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = 1e9;
        int ans = 1e9;
        while(low<=high){
            int mid = (low+high)/2;

            if(chk(nums, threshold, mid)){
                high = mid-1;
                ans = mid;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};