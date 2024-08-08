class Solution {
public:
    int possible(vector<int>& bloomDay,int day,int m,int k)//day is max no of days a flower can be blooming
    {
        int currentBouquets=0;
        int consecutive=0;
        int n=bloomDay.size();
        for(int i=0;i<n;i++)
        {
            if(bloomDay[i]<=day)
            {
                consecutive++;
            }
            else{

            currentBouquets+=consecutive/k;
            consecutive =0;
        }
    }
    currentBouquets+=consecutive/k;
    if(currentBouquets>=m)
    return true;
    return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=INT_MAX;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(possible(bloomDay,mid,m,k))
            {
                ans=min(ans,mid);
                high=mid-1;
            }
            else
            low=mid+1;
        }
        if(ans==INT_MAX)
        return -1;
        return ans;
    }
};