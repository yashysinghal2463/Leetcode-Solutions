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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*temp=head;
          ListNode*duplicate=nullptr;
        while (temp != nullptr && temp->next != nullptr){
        if(temp->val==temp->next->val){
          duplicate=temp->next;
          temp->next=temp->next->next;
         
          delete duplicate;
        

        }else{
        temp=temp->next;}
        
        
    }return head;}
};