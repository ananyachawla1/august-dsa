//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int k) 
    { 
        // Complete the function
        unordered_map<long long, int> prefixSumIndices;
       long long sum = 0;
       int maxlen = 0;

       for (int i = 0; i < n; ++i) {
         sum += a[i];

         if (sum == k) {
            maxlen = max(maxlen, i + 1);
         }

         if (prefixSumIndices.find(sum - k) != prefixSumIndices.end()) {
            maxlen = max(maxlen, i - prefixSumIndices[sum - k]);
         }

         if (prefixSumIndices.find(sum) == prefixSumIndices.end()) {
            prefixSumIndices[sum] = i;
         }
        }

        return maxlen;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends