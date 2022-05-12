class Solution
{
public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        auto cmp = [](ListNode *a, ListNode *b)
        {
            return a->val > b->val;
        };
        priority_queue<ListNode *, vector<ListNode *>, decltype(cmp)> pq(cmp);
        for (int i = 0; i < lists.size(); i++)
        {
            if (lists[i] != nullptr)
            {
                pq.push(lists[i]);
            }
        }
        ListNode *res = new ListNode(-1);
        ListNode *head = res;
        while (!pq.empty())
        {
            ListNode *tmp = pq.top();
            pq.pop();
            head->next = tmp;
            head = head->next;
            if (tmp->next != nullptr)
                pq.push(tmp->next);
        }
        return res->next;
    }
};
