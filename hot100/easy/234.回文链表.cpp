/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
 *
 * https://leetcode.cn/problems/palindrome-linked-list/description/
 *
 * algorithms
 * Easy (52.57%)
 * Likes:    1543
 * Dislikes: 0
 * Total Accepted:    516.1K
 * Total Submissions: 981.6K
 * Testcase Example:  '[1,2,2,1]'
 *
 * 给你一个单链表的头节点 head ，请你判断该链表是否为回文链表。如果是，返回 true ；否则，返回 false 。
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：head = [1,2,2,1]
 * 输出：true
 * 
 * 
 * 示例 2：
 * 
 * 
 * 输入：head = [1,2]
 * 输出：false
 * 
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 链表中节点数目在范围[1, 10^5] 内
 * 0 <= Node.val <= 9
 * 
 * 
 * 
 * 
 * 进阶：你能否用 O(n) 时间复杂度和 O(1) 空间复杂度解决此题？
 * 
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head)
    {
        ListNode* temp = nullptr;
        ListNode* cur = head;
        ListNode* pre = nullptr;

        while(cur)
        {
            temp = cur->next;
            cur->next = pre;

            pre = cur;
            cur = temp;
        }
        return pre;
    }

    bool isPalindrome(ListNode* head) {
        int sum = 0;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }

        //小细节
        if (fast) slow = slow->next;

        ListNode* right = reverseList(slow);
        ListNode* left = head;
        
        while(right)
        {
            if (right->val != left->val) return false;

            right = right->next;
            left = left->next;
        }
        return true;
    }
};
// @lc code=end

