//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int no;
        
        for(int i=0;i<n;i++)      
          {
              if(count==0)
              {
                  count++;
                  no=nums[i];
              }
              else if(nums[i]==no)
              count++;
              else
              count--;
            }
            int cnt=0;
               for(int i=0;i<n;i++)    
               {
                   if(no==nums[i])
                   cnt++;
               }  
               if(cnt>n/2)
               return no;
                return -1;
        }
        
    
};