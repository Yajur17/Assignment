struct ListNode* deleteDuplicates(struct ListNode* head){
struct ListNode *p1=head,*p2=head,*p3=NULL,*p4=NULL;

    int countt=0,k1=0;
    if(head==NULL)
        return 0;
    if(head->next==NULL&&head!=NULL)
        return head;
    for(p1=head;p1!=NULL;p1=p1->next)
    {
        count=0;
        for(p2=head;p2!=NULL;p2=p2->next)
        {
            if(p2->val==p1->val)
                count++;
        }
        //count==1 implies unique node , count>1 => (duplicate element not to be considered)
        if(count==1)
        {
            k1++;
            if(k1==1) //k1=1 implies this will be our head node of new list without duplicates
                p4=p3=p1;
            else
            {
                p3->next=p1;
                p3=p1;
                //p3->next=NULL;
            }                
        }
    }
    if(k1==0) //implies no unique node
        return 0;
    p3->next=NULL;
    return p4;
}
