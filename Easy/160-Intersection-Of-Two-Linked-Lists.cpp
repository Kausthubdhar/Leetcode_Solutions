/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int m=0,n=0;
        ListNode* temp = headA;
        while(temp) n++, temp = temp->next;
        temp = headB;
        while(temp) m++, temp = temp->next;
        ListNode* temp2 = headB;
        temp = headA;
        if(n > m){
            int diff = n-m;
            while(diff--) temp = temp->next;
        }
        else if(m > n){
            int diff = m-n;
            while(diff--) temp2 = temp2->next;
        }
        while(temp && temp2){
            if(temp == temp2) return temp;
            temp = temp->next, temp2 = temp2->next;
        }
        return nullptr;
    }
};