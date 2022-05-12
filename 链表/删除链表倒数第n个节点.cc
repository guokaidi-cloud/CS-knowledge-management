class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if (head == nullptr)
            return head;
        ListNode *pre = new ListNode(-1);
        pre->next = head;
        ListNode *fast = pre;
        ListNode *slow = pre;
        while (n--)
        {
            fast = fast->next;
        }
        while (fast->next != nullptr)
        {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return pre->next;
    }
};