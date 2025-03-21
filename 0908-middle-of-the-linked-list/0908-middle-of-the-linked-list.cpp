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
    ListNode* middleNode(ListNode* head) {
        int cnt=0;
        
        ListNode*k=head;
        while(k!=NULL){
            k=k->next;
            cnt++;
        }
        ListNode* temp=head;
       int r=1;
            
            
            int midnode=(cnt/2)+1;
            temp=head;

            while(temp!=NULL){
                midnode=midnode-1;
                if(midnode==0){
                    break;
                }
                temp=temp->next;
            }

        return temp;
    }
};