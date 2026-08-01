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
        ListNode* temp = head;
        int num = 0;
        while(temp!=NULL){
            num++;
            temp = temp->next;
        }
         if(n == num)
            return head->next;
        num = num - n -1;
        temp = head;
        while(num--){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};