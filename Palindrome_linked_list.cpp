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
    bool isPalindrome(ListNode* head) {
        ListNode *head2 = NULL;
        ListNode *temp= head;
        
        while(temp!=NULL){
            ListNode *node = new ListNode(temp->val);
            if(head2==NULL){
                head2 = node;
            }
            node->next = head2;
            head2 = node;
            temp = temp->next;
        } 
        temp = head;
        ListNode *temp2 = head2;
        while(temp!= NULL && temp2!=NULL){
    

            if(temp->val != temp2->val){
                return false;
            }
            temp = temp->next;
            temp2 = temp2->next;
        }
        return true;
    }
};
