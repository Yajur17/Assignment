struct ListNode* rotateRight(struct ListNode* head, int k){
    struct ListNode *p=head;
    int count=0;
    while(h!=NULL)
    {
        count++;
        p=p->next;
    }
    if(head==NULL)
        return 0;
        if(head->next==NULL && head!=NULL)
            return head;
    for(int i=0;i<k%count;i++)
    {
        struct ListNode *q=head,*p2=head,*p1;
        //rotate list by one element
    while(head->next!=NULL)
    {
        p1=head;
        head=head->next;
    }
    p1->next=NULL;
    head->next=p2;
    
    }
    return head;

}
