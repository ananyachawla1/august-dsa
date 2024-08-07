class Solution {
public:
long long Hours(vector<int>& piles,int hourqnty)
{
    long long totalHours=0;
     int n=piles.size();
        for(int i=0;i<n;i++)
     {
         totalHours+=ceil(1.0*piles[i]/hourqnty);
     }
     return totalHours;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1,high=1e9;
        int ans=-1;
        while(low<=hgih)
        {
            int mod=(low+high)/2;
            long long val=Hours(piles,mid);
            if(val<=h)
            {
                ans=mid;
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return ans;
    }
};