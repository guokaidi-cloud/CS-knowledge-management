class Solution
{
public:
    ListNode *reverse(ListNode *head)
    {
        ListNode *prehead = nullptr;
        while (head)
        {
            ListNode *tmp = head->next;
            head->next = prehead;
            prehead = head;
            head = tmp;
        }
        return prehead;
    }

    bool isPail(ListNode *head)
    {
        // write code here
        ListNode *p = head;
        int n = 0;
        while (p != nullptr)
        {
            n++;
            p = p->next;
        }
        n = n / 2;
        p = head;
        while (n > 0)
        {
            p = p->next;
            n--;
        }
        p = reverse(p);
        ListNode *q = head;
        while (p != NULL)
        {
            //比较判断节点值是否相等
            if (p->val != q->val)
                return false;
            p = p->next;
            q = q->next;
        }
        return true;
    }
};