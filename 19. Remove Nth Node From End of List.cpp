class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* back = head;
        ListNode* front = head;
        for(int i=0; i<n; i++){
            front = front->next;
        }
        if (front == nullptr)
        {
            return head->next;
        }
        while(front->next != nullptr){
            front = front->next;
            back = back->next;
            
        }
        back->next = back->next->next;
        return head;
        
    }
    
};
