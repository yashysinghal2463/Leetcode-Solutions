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
        ListNode*temp=head;
        
        while(temp){
            cnt++;
            temp=temp->next;
            
        }
        int k=(cnt/2)+1;
        temp=head;
        while(temp){
           k=k-1;
            if(k==0){break;}
         temp=temp->next;
          

        }
        
        return temp;
    }
};