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
        if(head==nullptr)return nullptr;
        int ct=0;
        ListNode* temp=head;
        while(temp!=nullptr){
            ct++;
            temp=temp->next;
        }
        if(n==ct){
            ListNode* t=head->next;
            delete head;
            return t;
        }
        int idx=ct-n;
        temp=head;
        for(int i =1;i<idx;i++){
            temp=temp->next;
        }
        ListNode* t=temp->next;
        temp->next=temp->next->next;
        delete t;
        return head;
    }
};