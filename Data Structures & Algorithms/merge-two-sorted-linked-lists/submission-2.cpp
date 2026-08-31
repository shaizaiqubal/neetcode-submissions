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

        while(c1!=nullptr || c2!=nullptr){
            if(c1 == nullptr){
                current->next=new ListNode(c2->val);
                current = current->next;
                c2 = c2 -> next;
            }
            else if(c2 == nullptr){
                current->next=new ListNode(c1->val);
                current = current->next;
                c1 = c1->next;
            }
            else{
                int d1 = c1->val;
                int d2 = c2->val;
                if(d1==d2 || d1<d2){
                    current->next=new ListNode(d1);
                    current = current->next;
                    c1 = c1->next;
                }
                else if(d2<d1){
                    current->next=new ListNode(d2);
                    current = current->next;
                    c2 = c2 -> next;
                }
            }
            
        }
        ListNode* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
};
