/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        int count =0;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast = fast->next->next;
            slow=slow->next;
            if(fast ==slow)
            {
                break;    
            }
        }
        if(fast == NULL || fast->next==NULL)
        {
            return NULL;
        }
        ListNode* ptr1= head;
        ListNode* ptr2= slow;
        while(ptr1!=ptr2)
        {
            ptr1=ptr1->next;
            ptr2=ptr2->next;
            count++;
        
        }
        return ptr1;
    }
};
