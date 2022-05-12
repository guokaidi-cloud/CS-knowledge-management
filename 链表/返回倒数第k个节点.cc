class Solution
{
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param pHead ListNode类
     * @param k int整型
     * @return ListNode类
     */
    ListNode *FindKthToTail(ListNode *pHead, int k)
    {
        if (pHead == nullptr || pHead->next == nullptr)
            return pHead;
        ListNode *fast = pHead;
        ListNode *slow = pHead;
        while (k--)
        {
            if (fast == nullptr)
                return nullptr;
            fast = fast->next;
        }
        if (fast == nullptr)
            return pHead;
        while (fast)
        {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};