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

    ListNode* sortList(ListNode* head) {
        vector<int> temp;
        ListNode* t1=head;
        int i=0;
        while(t1!=nullptr){
            temp.push_back(t1->val);
            t1=t1->next;
        }
        sort(temp.begin(),temp.end());
        t1=head;
        while(t1!=nullptr){
            t1->val=temp[i++];
            t1=t1->next;
        }
        return head;
    }
};