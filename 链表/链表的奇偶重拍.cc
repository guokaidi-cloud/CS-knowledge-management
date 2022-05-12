class Solution
{
public:
    ListNode *oddEvenList(ListNode *head)
    {
        if (head == nullptr)
            return head;
        ListNode *even = head->next;
        ListNode *odd = head;
        ListNode *evenhead = even;
        while (even && even->next)
        {
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }
        odd->next = evenhead;
        return head;
    }
};