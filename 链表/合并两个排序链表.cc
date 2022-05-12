class Solution
{
public:
    ListNode *Merge(ListNode *pHead1, ListNode *pHead2)
    {
        ListNode *res = new ListNode(-1);
        ListNode *pre = res;
        while (pHead1 && pHead2)
        {
            if (pHead1->val <= pHead2->val)
            {
                pre->next = pHead1;
                pHead1 = pHead1->next;
            }
            else
            {
                pre->next = pHead2;
                pHead2 = pHead2->next;
            }
            //指针后移不要忘记
            pre = pre->next;
        }
        pre->next = pHead1 ? pHead1 : pHead2;
        return res->next;
    }
};