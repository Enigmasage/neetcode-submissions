/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    void reorderList(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
            return ;

        // find middle
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* second= slow->next;
        slow->next= NULL;

        // reverse 2nd half:
        ListNode* prev= NULL;
        ListNode* nxt= NULL;

        while(second!= NULL)
        {
            nxt=second->next;
            second->next=prev;
            prev=second;
            second=nxt;
            
        }
        // merge 2 lls:
        // second is now the head of 2nd ll
        second=prev; 
        ListNode* first= head;

        while(second!=NULL)
        {
            ListNode* t1=first->next;
            ListNode* t2=second->next;

            first->next=second;
            second->next=t1;

            first=t1;
            second=t2;
        }

    }
};
