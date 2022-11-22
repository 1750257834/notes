/*
 * @lc app=leetcode.cn id=78 lang=cpp
 *
 * [78] 子集
 *
 * https://leetcode.cn/problems/subsets/description/
 *
 * algorithms
 * Medium (80.85%)
 * Likes:    1824
 * Dislikes: 0
 * Total Accepted:    536.6K
 * Total Submissions: 663.7K
 * Testcase Example:  '[1,2,3]'
 *
 * 给你一个整数数组 nums ，数组中的元素 互不相同 。返回该数组所有可能的子集（幂集）。
 * 
 * 解集 不能 包含重复的子集。你可以按 任意顺序 返回解集。
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：nums = [1,2,3]
 * 输出：[[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
 * 
 * 
 * 示例 2：
 * 
 * 
 * 输入：nums = [0]
 * 输出：[[],[0]]
 * 
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 1 
 * -10 
 * nums 中的所有元素 互不相同
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> res;
    vector<int> temp;
    void backtracing(vector<int>& nums, vector<bool>& used, int start)
    {
        res.push_back(temp);
        if (temp.size() == nums.size()) return;

        for (int i = start; i < nums.size(); i++)
        {
            if (used[i]) continue;
            used[i] = true;
            temp.push_back(nums[i]);
            backtracing(nums, used, i + 1);
            used[i] = false;
            temp.pop_back();
        }
        return;
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        res.clear();
        temp.clear();
        vector<bool> used(nums.size(), false);
        backtracing(nums, used, 0);        
        return res;
    }
};
// @lc code=end

