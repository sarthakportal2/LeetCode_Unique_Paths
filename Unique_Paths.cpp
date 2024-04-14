class Solution {
public:
    int uniquePaths(int m, int n) { //Dynamic programming Approach
        //min runtime(0ms)T(C(N)==O(N**2)) and S(C(N)==O(N**2)) as it requires dynamic memory allocation iteratively at each step
        vector<vector<int>>dp(m,vector<int>(n,1));//Grid Vector Declare
        for(int i=1;i<m;++i)//iterating through grid's row
            for(int j=1;j<n;++j)//iterating through grid's Col
               dp[i][j]=dp[i-1][j]+dp[i][j-1];//Goal State Declare at Grid's Final Right

        return dp[m-1][n-1];}};//Printing Agent's current Winning Final State
