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
    ListNode* rotateRight(ListNode* head, int k) {
        
        
        if(head==NULL) return NULL;
        
        int n=1;
        ListNode *tail=head;
        while(tail->next){
            tail=tail->next;
            n++;
        }
        k%=n;
        if(k==0) return head;
        int steps_count=n-k;
        tail->next=head;
        ListNode *newTail=tail;
        while(steps_count>0){
            newTail=newTail->next;
            steps_count--;
        }
        ListNode *newHead=newTail->next;
        newTail->next=NULL;
        return newHead;   

    }
};
