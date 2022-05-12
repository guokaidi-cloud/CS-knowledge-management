
class Solution
{
public:
    ListNode *reverseBetween(ListNode *head, int m, int n)
    {
        // write code here
        if (head == nullptr || head->next == nullptr)
            return head;
        // 表头
        ListNode *res = new ListNode(-1);
        res->next = head;
        // 前序节点
        ListNode *pre = res;
        // 当前节点
        ListNode *cur = head;
        // 找到m节点
        for (int i = 1; i < m; i++)
        {
            pre = cur;
            cur = cur->next;
        }
        // 从m反转到n
        for (int i = m; i < n; i++)
        {
            ListNode *tmp = cur->next;
            cur->next = tmp->next;
            tmp->next = pre->next;
            pre->next = tmp;
        }
        // 去掉表头
        return res->next;
    }
};