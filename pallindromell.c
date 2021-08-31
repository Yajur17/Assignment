bool isPalindrome(struct ListNode* head){
   struct ListNode *p=head,*q=head;
    int count=0;
    int i=0;
    while(p!=NULL)
    {
        
        p=p->next;
        count++;
    }
    
    int arr[count];
    while(q!=NULL)
    {
        arr[i++]=q->val;
        q=q->next;
    }
    int l=0,r=count-1;
    while(l<=r)
    {
        if(arr[l]!=arr[r])
        return false;
        l++;
        r--;
    }
    
    return true; }