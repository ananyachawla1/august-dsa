class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        unordered_map<long long, int> prefixSumIndices;
        int n = a.size();
       long long sum = 0;
       int ans = 0;

       for (int i = 0; i < n; ++i) {
         sum += a[i];

         if (sum == k) {
            ans++;
         }

         if (prefixSumIndices.find(sum - k) != prefixSumIndices.end()) {
            ans += prefixSumIndices[sum-k];
         }

         prefixSumIndices[sum]++;
         
        }

        return ans;
    }
};