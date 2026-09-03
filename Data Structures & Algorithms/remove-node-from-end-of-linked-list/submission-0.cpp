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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* cur=head;
        ListNode* nxt=nullptr;
        ListNode* prev=nullptr;

        while(cur!=NULL)
        {
            nxt=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nxt;
        }
        // now prev is head;
        ListNode*start=prev; 
        ListNode*back=nullptr;
        int count=1;
        while(count!=n && prev!=NULL)
        {
            count++;
            back=prev;
            prev=prev->next;
        }

        if(back==NULL)
        {
            start=prev->next;
        }
        else{
            back->next=prev->next;
        }
        ListNode* cur1=start;
        ListNode* nxt1=nullptr;
        ListNode* prev1=nullptr;

        while(cur1!=NULL)
        {
            nxt1=cur1->next;
            cur1->next=prev1;
            prev1=cur1;
            cur1=nxt1;
        }
        return prev1;
    }
};
