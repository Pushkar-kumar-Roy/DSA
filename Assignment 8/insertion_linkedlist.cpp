https://leetcode.com/problems/intersection-of-two-linked-lists/



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 bool present(ListNode *temp , ListNode *target){
     while(temp != NULL){
           if(temp == target)
           return true;
           temp = temp->next;
     }
     return false;
 }
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1 = headA;
        ListNode *temp2 = headB;
        int i=1;
            while(temp2 != NULL){
                if (present(temp1,temp2)) return temp2;
                temp2 = temp2->next;
            }
        return temp2;
    }
};
