// Runtime: 0ms - Beats 100%
// Memory: 7MB - Beats 73.38%
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
    ListNode* middleNode(ListNode* head) {
        ListNode* mid = head;
        
        while (head && head->next){
            head = head->next->next;
            mid = mid->next;
        }
        return mid;
    }
};
