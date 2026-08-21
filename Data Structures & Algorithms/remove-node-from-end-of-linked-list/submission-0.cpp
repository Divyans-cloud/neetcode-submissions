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
        ListNode *left=head;
        ListNode *right=head;
        ListNode* prev=nullptr;
        for(int i=0;i<n;i++){
            right=right->next;
        }
        if (right == nullptr) {
            ListNode* newHead = head->next;
            delete head; 
            return newHead;
        }
        while(right!=nullptr){
            prev=left;
            left=left->next;
            right=right->next;
        }
        prev->next=left->next;
        delete left;
        return head;
    }
};