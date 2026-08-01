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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* head = new ListNode(0);
        ListNode* ans = head;
        int carry = 0;

        while(temp1!=NULL || temp2!=NULL){
             int val1 = (temp1 != NULL) ? temp1->val : 0;
            int val2 = (temp2 != NULL) ? temp2->val : 0;

            int finalVal = val1 + val2 + carry;
            carry = finalVal / 10;
            finalVal = finalVal % 10;

            head->next  = new ListNode(finalVal);
            head = head->next; 
            if (temp1 != NULL)
                temp1 = temp1->next;

            if (temp2 != NULL)
                temp2 = temp2->next;
        }
         if (carry)
            head->next = new ListNode(carry);
        return ans->next;
    }
};