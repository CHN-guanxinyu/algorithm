/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> v;
        if(head != NULL){
            v = {head -> val};
        
            while(head -> next != NULL){
                head = head->next;
                v.insert(v.begin(), head -> val);
            }
        }
        return v;
    }
};
