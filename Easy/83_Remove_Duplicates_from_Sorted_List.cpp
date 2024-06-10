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
        if(!head) return head;
        unordered_set<int> ms;
        ListNode *temp = head, *tt = new ListNode(head->val);
        ListNode *tail = tt;
        ms.insert(head->val);
        while(temp){
            int data = temp->val;
            if(ms.find(data) == ms.end()){
                ListNode *node = new ListNode(data);
                tail->next = node;
                tail = node;
                ms.insert(data);
            }
            temp = temp->next;
        }
        return tt;
    }
};