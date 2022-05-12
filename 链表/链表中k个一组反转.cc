class Solution
{
public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        //找到每次翻转的尾部
        ListNode *tail = head;
        //遍历k次到尾部
        for (int i = 0; i < k; i++)
        {
            //如果不足k到了链表尾，直接返回，不翻转
            if (tail == NULL)
                return head;
            tail = tail->next;
        }
        //翻转时需要的前序和当前节点
        ListNode *pre = NULL;
        ListNode *cur = head;
        //在到达当前段尾节点前
        while (cur != tail)
        {
            //翻转
            ListNode *temp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = temp;
        }
        //当前尾指向下一段要翻转的链表
        head->next = reverseKGroup(tail, k);
        return pre;
    }
};