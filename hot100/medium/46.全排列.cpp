/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 *
 * https://leetcode.cn/problems/permutations/description/
 *
 * algorithms
 * Medium (78.76%)
 * Likes:    2262
 * Dislikes: 0
 * Total Accepted:    743.5K
 * Total Submissions: 943.9K
 * Testcase Example:  '[1,2,3]'
 *
 * 给定一个不含重复数字的数组 nums ，返回其 所有可能的全排列 。你可以 按任意顺序 返回答案。
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：nums = [1,2,3]
 * 输出：[[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
 * 
 * 
 * 示例 2：
 * 
 * 
 * 输入：nums = [0,1]
 * 输出：[[0,1],[1,0]]
 * 
 * 
 * 示例 3：
 * 
 * 
 * 输入：nums = [1]
 * 输出：[[1]]
 * 
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 1 <= nums.length <= 6
 * -10 <= nums[i] <= 10
 * nums 中的所有整数 互不相同
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> res;
    vector<int> temp;
    void backtracing(vector<int>& nums, vector<bool>& used)
    {
        if (temp.size() == nums.size())
        {
            res.push_back(temp);
            return;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (used[i]) continue;
            temp.push_back(nums[i]);
            used[i] = true;
            backtracing(nums, used);
            temp.pop_back();
            used[i] = false;
        }
        return;
    }

    vector<vector<int>> permute(vector<int>& nums) {
        res.clear();
        temp.clear();
        int m = nums.size();
        vector<bool> used(m, false);
        backtracing(nums, used);
        return res;
    }
};
// @lc code=end

