#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
void travesringandprinting(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element =%d\n",ptr->data);
        ptr = ptr->next;        
    }

}
int main()
{
    
    struct node*head;
    struct node*second;
    struct node*third;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
     
    head->data=19;
    head->next=second;

    second->data=26;
    second->next=third;


    third->data=19;
    third->next=NULL;

    travesringandprinting(head);
    return 0;  
}