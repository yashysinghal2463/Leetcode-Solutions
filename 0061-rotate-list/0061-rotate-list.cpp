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
        ListNode*temp=head;
          if (!head || !head->next || k == 0) return head;
        int cnt=1,j;
        while(temp->next){
            cnt++;
            temp=temp->next;
            
        }
        temp->next=head;
        k=k%cnt;
        j=cnt-k;
        ListNode*newHead=nullptr;
        ListNode* curr=head;
        for(int i=1;i<j;++i){
            curr=curr->next;
        }
        newHead=curr->next;
        curr->next=nullptr;
        


        return newHead;
    }
};