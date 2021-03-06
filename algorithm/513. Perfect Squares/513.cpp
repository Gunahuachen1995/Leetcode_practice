class Solution {
public:
    /**
     * @param n: a positive integer
     * @return: An integer
     */
    int numSquares(int n) {
        // write your code here
        
        vector<int> dp(n+1, INT_MAX);
        
        for(int i = 0; i*i <= n; i++) {
            dp[i*i] = 1;
        }
        
        for(int i = 1; i <= n; i++) {
            for(int j =1; j * j <= i; j++)  {
                dp[i] = min(dp[i], dp[ i - j*j] +1);
            }
        }
        return dp[n];
    }
};
