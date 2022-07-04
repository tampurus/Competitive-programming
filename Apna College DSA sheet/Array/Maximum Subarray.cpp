/* https://leetcode.com/problems/maximum-subarray/

first approach 
time -> O ( N^3)
space -> no extra space */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum,ans=INT_MIN;
        int i,j,k;
        for(i=0 ; i<n ; i++){
            for(j=0 ; j<n ; j++){
                sum = 0;
                for(k=i ; k<=n-j ; k++){
                    sum+=nums[k];
                }
                ans = max(ans,sum);
            }
        }
        return ans;
    }
};
