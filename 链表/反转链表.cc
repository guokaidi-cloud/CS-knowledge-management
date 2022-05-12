// 迭代
class Solution
{
public:
    ListNode *ReverseList(ListNode *pHead)
    {
        ListNode *cur = nullptr;
        if (pHead == nullptr)
            return nullptr;
        while (pHead)
        {
            ListNode *tmp = pHead->next;
            pHead->next = cur;
            cur = pHead;
            pHead = tmp;
        }
        return cur;
    }
};

// 递归
class Solution
{
public:
    ListNode *ReverseList(ListNode *pHead)
    {
        //特判：注意不要漏掉pHead->next==NULL的情况
        if (pHead == NULL || pHead->next == NULL)
        {
            return pHead;
        }
        //递归调用
        ListNode *ans = ReverseList(pHead->next);
        //让当前结点的下一个结点的 next 指针指向当前节点
        pHead->next->next = pHead;
        //同时让当前结点的 next 指针指向NULL ，从而实现从链表尾部开始的局部反转
        pHead->next = NULL;
        return ans;
    }
};
