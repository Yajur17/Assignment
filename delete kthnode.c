/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */




struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    
 int r = 0;
    int i=1;
    
        struct ListNode* temp = head;
        struct ListNode *fast=head;
        struct ListNode *slow=head;

        while (i <= n) {
            r ++;
            //bringing fast node to the nth node
            fast = fast->next;
            ++i;}
    
        //error at here for [1]
    //condition for 1 node (error)
    if(temp->next==NULL){
         return temp;
    }
    
    //bringing slow node to nth node
        while(fast->next !=NULL){
            fast=fast->next;
            slow=slow->next;
        
        }
    
        //connecting (n-1)th node to (n+1) node    
        slow->next=slow->next->next;
        
    //returning the LL withound nth node
        return temp; // stored head
    }
