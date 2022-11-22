/*
 * @lc app=leetcode.cn id=279 lang=cpp
 *
 * [279] 完全平方数
 *
 * https://leetcode.cn/problems/perfect-squares/description/
 *
 * algorithms
 * Medium (65.69%)
 * Likes:    1518
 * Dislikes: 0
 * Total Accepted:    346.1K
 * Total Submissions: 526.8K
 * Testcase Example:  '12'
 *
 * 给你一个整数 n ，返回 和为 n 的完全平方数的最少数量 。
 * 
 * 完全平方数 是一个整数，其值等于另一个整数的平方；换句话说，其值等于一个整数自乘的积。例如，1、4、9 和 16 都是完全平方数，而 3 和 11
 * 不是。
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：n = 12
 * 输出：3 
 * 解释：12 = 4 + 4 + 4
 * 
 * 示例 2：
 * 
 * 
 * 输入：n = 13
 * 输出：2
 * 解释：13 = 4 + 9
 * 
 * 
 * 提示：
 * 
 * 
 * 1 <= n <= 10^4
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;
        for (int i = 1; i * i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j - i * i >= 0)
                {
                    //完全背包，dp[j - i * i] + 1  等同于 dp[j - weight[i]] + value[i]
                    //i * i is weight, the value of i*i is 1
                    // if dp[j - i * i] == INT_MAX, use min filte this invalid value
                    dp[j] = min(dp[j], dp[j - i * i] + 1);
                }                
            }
        }
        return dp[n];
    }
};
// @lc code=end

