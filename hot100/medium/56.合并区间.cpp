/*
 * @lc app=leetcode.cn id=56 lang=cpp
 *
 * [56] 合并区间
 *
 * https://leetcode.cn/problems/merge-intervals/description/
 *
 * algorithms
 * Medium (49.18%)
 * Likes:    1680
 * Dislikes: 0
 * Total Accepted:    544.1K
 * Total Submissions: 1.1M
 * Testcase Example:  '[[1,3],[2,6],[8,10],[15,18]]'
 *
 * 以数组 intervals 表示若干个区间的集合，其中单个区间为 intervals[i] = [starti, endi]
 * 。请你合并所有重叠的区间，并返回 一个不重叠的区间数组，该数组需恰好覆盖输入中的所有区间 。
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：intervals = [[1,3],[2,6],[8,10],[15,18]]
 * 输出：[[1,6],[8,10],[15,18]]
 * 解释：区间 [1,3] 和 [2,6] 重叠, 将它们合并为 [1,6].
 * 
 * 
 * 示例 2：
 * 
 * 
 * 输入：intervals = [[1,4],[4,5]]
 * 输出：[[1,5]]
 * 解释：区间 [1,4] 和 [4,5] 可被视为重叠区间。
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 1 <= intervals.length <= 10^4
 * intervals[i].length == 2
 * 0 <= starti <= endi <= 10^4
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),
        [](vector<int>& a, vector<int>& b){return a[0] < b[0];});

        int m = intervals.size();
        vector<vector<int>> res;
        for (int i = 0; i < m; i++)
        {
            if (res.empty())
            {
                res.push_back(intervals[i]);
                continue;
            }

            if (intervals[i][0] <= res.back()[1])
            {
                if (intervals[i][1] > res.back()[1])
                {
                    res.back()[1] = intervals[i][1];
                }
            }
            else
            {
                res.push_back(intervals[i]);
            }
        }
        return res;
    }
};
// @lc code=end

