class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* cur=head;
        while(cur != nullptr && cur->next != nullptr)
        {
            if(cur->val == cur->next->val)
            {
                ListNode* dup=cur->next;
                cur->next=dup->next;
                delete dup;
            }
            else
            {
                cur=cur->next;
            }
        }
        return head;
    }
};
