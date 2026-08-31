/**
 * Definition for singly-linked list.
 * struct ListNode 
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
        ListNode* c1 = list1;
        ListNode* c2 = list2;

        ListNode* head = new ListNode();
        ListNode* current = head;

        while(c1!=nullptr && c2!=nullptr){
            int d1 = c1->val;
            int d2 = c2->val;
            if(d1==d2 || d1<d2){
                current->next=new ListNode(d1);
                current = current->next;
                c1 = c1->next;
            }
            else{
                current->next=new ListNode(d2);
                current = current->next;
                c2 = c2 -> next;
            }
        }
        if(c1==nullptr){
            current->next=c2;
        }
        else if(c2==nullptr){
            current->next=c1;
        }

            
        return head->next;
    }
};
