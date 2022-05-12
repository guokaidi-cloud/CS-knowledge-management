class Solution
{
public:
    ListNode *FindFirstCommonNode(ListNode *pHead1, ListNode *pHead2)
    {
        if (!pHead1 || !pHead2)
            return nullptr;
        ListNode *l1 = pHead1;
        ListNode *l2 = pHead2;
        while (l1 != l2)
        {
            l1 = l1 ? l1->next : pHead2;
            l2 = l2 ? l2->next : pHead1;
        }
        return l1;
    }
};