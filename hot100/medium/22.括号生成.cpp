/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 *
 * https://leetcode.cn/problems/generate-parentheses/description/
 *
 * algorithms
 * Medium (77.54%)
 * Likes:    2912
 * Dislikes: 0
 * Total Accepted:    606.1K
 * Total Submissions: 781.8K
 * Testcase Example:  '3'
 *
 * 数字 n 代表生成括号的对数，请你设计一个函数，用于能够生成所有可能的并且 有效的 括号组合。
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：n = 3
 * 输出：["((()))","(()())","(())()","()(())","()()()"]
 * 
 * 
 * 示例 2：
 * 
 * 
 * 输入：n = 1
 * 输出：["()"]
 * 
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 1 <= n <= 8
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    vector<string> res;
    void backtracing(string temp, int l, int r)
    {
        if (l > r || l < 0 || r < 0) return;

        if (l == 0 && r == 0)
        {
            res.push_back(temp);
            return;
        }
        
        temp += "(";
        backtracing(temp, l - 1, r);
        temp.pop_back();

        temp += ")";
        backtracing(temp, l, r - 1);
        temp.pop_back();
        return;
    }

    vector<string> generateParenthesis(int n) {
        res.clear();
        string temp = "";
        backtracing(temp, n, n);
        return res;
    }
};
// @lc code=end

