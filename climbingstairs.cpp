class Solution {
  public:
    // Function to count number of ways to reach the nth stair.
    int solve(int n, vector<int>& dp){
        if(n == 0) return 1;
        if(n < 0) return 0;
        
        if(dp[n] != -1){
            return dp[n];
        }
        return dp[n]=solve(n-1,dp)+solve(n-2,dp);
    }
    int countWays(int n) {
        // your code here
        if (n==0)  return 1;
        if (n < 0) return 0;
        
        vector<int> dp(n+1,-1);
        return solve(n,dp);
    }
};