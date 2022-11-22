/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 *
 * https://leetcode.cn/problems/letter-combinations-of-a-phone-number/description/
 *
 * algorithms
 * Medium (57.79%)
 * Likes:    2150
 * Dislikes: 0
 * Total Accepted:    586.5K
 * Total Submissions: 1M
 * Testcase Example:  '"23"'
 *
 * 给定一个仅包含数字 2-9 的字符串，返回所有它能表示的字母组合。答案可以按 任意顺序 返回。
 * 
 * 给出数字到字母的映射如下（与电话按键相同）。注意 1 不对应任何字母。
 * 
 * 
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：digits = "23"
 * 输出：["ad","ae","af","bd","be","bf","cd","ce","cf"]
 * 
 * 
 * 示例 2：
 * 
 * 
 * 输入：digits = ""
 * 输出：[]
 * 
 * 
 * 示例 3：
 * 
 * 
 * 输入：digits = "2"
 * 输出：["a","b","c"]
 * 
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 0 <= digits.length <= 4
 * digits[i] 是范围 ['2', '9'] 的一个数字。
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    vector<string> res;
    string temp;
    void backtracing(vector<string> input, int count)
    {
        if (count == input.size())
        {
            res.push_back(temp);
            return;
        }

        for (int i = 0; i < input[count].size(); i++)
        {
            temp += input[count][i];
            backtracing(input, count + 1);
            temp.pop_back();
        }
        return;
    }

    vector<string> letterCombinations(string digits) {
        res.clear();
        temp = "";
        if (digits.length() == 0) return res;
        map<char, string> mp = {{'2', "abc"}, {'3', "def"}, 
        {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, 
        {'8', "tuv"}, {'9', "wxyz"}};        
        vector<string> input;
        for (int i = 0; i < digits.length(); i++)
        {
            input.push_back(mp[digits[i]]);
        }
        backtracing(input, 0);
        return res;
    }
};
// @lc code=end

