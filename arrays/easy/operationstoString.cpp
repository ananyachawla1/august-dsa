class Solution {
public:
    string lastNonEmptyString(string s) {
        vector<int> cnt(26,0);
        for(auto i: s) cnt[i-'a']++;

        int maxi = 0;
        for(auto i: cnt) maxi = max(maxi, i);

        string ans = "";
        for(int i=s.length()-1; i>=0; i--){
            if(maxi==cnt[s[i]-'a']){
                cnt[s[i]-'a']=-1;
                ans+=s[i];
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};