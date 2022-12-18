# Runtime: 49ms - Beats 64.78%
# Memory: 13.9MB - Beats 55.85%
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        mid: Optional[ListNode] = head

        while head and head.next:
            head = head.next.next
            mid = mid.next
        
        return mid
