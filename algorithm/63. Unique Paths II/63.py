class Solution(object):
    def uniquePathsWithObstacles(self, obstacleGrid):
        """
        :type obstacleGrid: List[List[int]]
        :rtype: int
        """
        m=len(obstacleGrid)
        n=len(obstacleGrid[0])
        dp=[[0]*(n+1) for x in range(0,m+1) ] 
        dp[0][1]=1
        for i in range(1,m+1):
            for j in range(1,n+1):
                if obstacleGrid[i-1][j-1]==0:
                    dp[i][j] = dp[i-1][j] + dp[i][j-1]
        return dp[m][n]
