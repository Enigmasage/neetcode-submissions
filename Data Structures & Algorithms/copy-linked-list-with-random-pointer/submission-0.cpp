/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        unordered_map<Node*,Node*>mp;

        Node* cur=head;
        // makin the copy nodes 1st using og addess to copy addess only bcz same value nodes can be there which are not same soo storing adresses!!
        while(cur!=NULL)
        {
            mp[cur]=new Node(cur->val);
            cur=cur->next;
        }
        // reset cur
        cur=head;
        // mapping nxt and random similarly!!
        while(cur!=NULL)
        {
            mp[cur]->next=mp[cur->next];
            mp[cur]->random=mp[cur->random];
            cur=cur->next;
        }
        return mp[head];


    }
};
