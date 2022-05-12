class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        // write code here
        if (head == nullptr)
            return nullptr;
        // 遍历指针
        ListNode *cur = head;
        while (cur != nullptr && cur->next != nullptr)
        {
            //如果cur与cur->next值相同则忽略cur->next
            if (cur->val == cur->next->val)
            {
                cur->next = cur->next->next;
            }
            else
            {
                cur = cur->next;
            }
        }
        return head;
    }
};

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == nullptr)
            return head;
        // 添加表头
        ListNode *prehead = new ListNode(-1);
        prehead->next = head;
        // 添加遍历节点
        ListNode *cur = prehead;
        while (cur->next && cur->next->next)
        {
            //如果出现重复节点，全删除
            if (cur->next->val == cur->next->next->val)
            {
                int tmp = cur->next->val;
                //
                while (cur->next != nullptr && tmp == cur->next->val)
                {
                    cur->next = cur->next->next;
                }
            }
            else
            {
                cur = cur->next;
            }
        }
        return prehead->next;
    }
};