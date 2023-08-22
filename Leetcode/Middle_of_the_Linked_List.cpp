/*Given the head of a singly linked list, return the middle node of the linked list.*/
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        for(;fast!=NULL && fast->next!=NULL;fast=fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
};
