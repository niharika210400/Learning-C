//To reverse a linked list in C
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
                        int data;
                        struct node *next;
                   }NODE;

NODE *createnode(NODE*h){
        NODE *head=h;
        if(!h)
        {       h=malloc(sizeof(NODE));
                scanf("%d",&(h->data));
                h->next=NULL;
                return h;
        }
        while(h->next!=NULL)
        {
                h=h->next;
        }
        h->next=malloc(sizeof(NODE));

        NODE *p=h->next;
        scanf("%d",&(p->data));
        p->next=NULL;
        return head;
}
void printlist(NODE* P)
{ while(P)
   { printf("%d ", P->data);
     P=P->next;
   }
   printf("\n");
   return;
}

NODE *reverselist(NODE *h){
        NODE *prev=NULL,*brr=NULL;
        if((!h)||(h->next==NULL))
        return h;
        while(h!=NULL)
        {       brr=h->next;
                h->next=prev;
                prev=h;
                h=brr;
        }
        return prev;
}

int main()
{       NODE *head=NULL;
        for(int i=0;i<5;i++)
                head=createnode(head);
        printlist(head);
        head=reverselist(head);
        printlist(head);
        NODE*tmp=head;
        while(head)
        {
                head=head->next;
                free(tmp);
                tmp=head;
        }
        free(head);
        return 0;
}
