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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* current = list1;
        vector<int> sorter;
        while(current!=nullptr){
            sorter.push_back(current->val);
            current=current->next;
        }
        ListNode* curr = list2;
        while(curr!=nullptr){
            sorter.push_back(curr->val);
            curr=curr->next;
        }
        if(sorter.size()==0){
            return nullptr;
        }
        sort(sorter.begin(),sorter.end());

        ListNode* head = new ListNode(sorter[0]);
        ListNode* sorted_ptr = head;
        
        for(int i = 1; i<sorter.size(); ++i){
            sorted_ptr->next = new ListNode(sorter[i]);
            sorted_ptr = sorted_ptr->next;
        }
        return head;

    }
};
