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
    ListNode* removeElements(ListNode* head, int val) {
        while (head != nullptr && head->val == val) {
            ListNode* remove = head;
            head = head->next;
            delete remove;
        }
        ListNode*temp=head;
        ListNode*prev=nullptr;
        ListNode*remove=nullptr;
        if(head==nullptr){return head;}
        while(temp){
            if(temp->val==val){
                remove=temp;
                temp=temp->next;
                if (prev){
                prev->next=temp;}
                delete remove;
            }
            else{ 
            prev=temp;
            temp=temp->next;
           }
            
            }
         return head;
    }
};