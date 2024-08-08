class Solution {
public:
bool chk(vector<int> &weights, int mid, int days){
        int cnt = 1;
        int currsum = 0;
         for(int i=0; i<weights.size(); i++){
          currsum += weights[i];
            if(weights[i]>mid) return false;
            if(currsum>mid){
                currsum = weights[i];
                cnt++;
            }
         }
        

        if(cnt <= days) return true;
        return false;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int low=0,high=1e9;
        int ans=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
             if(chk(weights, mid, days)==true){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
        }
    
};