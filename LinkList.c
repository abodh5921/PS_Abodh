#include <stdio.h>
struct LinkList
{
    int data;
    struct LinkList *next;
};

struct LinkList *front=NULL,*end=NULL;

// Function to initialize the LinkList
void setFunction(struct LinkList *node, int data)
{
    node->data = data;
    node->next = NULL;
}


//Function to insert element in the LinkList
void insertFunction(struct LinkList *node)
{
     if(front==end && front==NULL)
     {
        front=&node;
        end=&node;
     }
    else
    {
        end.next=&node;
         end=node;
    }




}
int main()
{
    printf("Enter you choice for the following operation \n");
    int choice;
    scanf("%d",&choice);
    printf("To insert element in LinkList : 1\n");
    printf("To insert element in end of  LinkList : 2\n");
    printf("To print  LinkList : 3\n");
    printf("To serch element in LinkList : 4\n");

    // switch(choice)
    // {
    //     case 1:

    //     break;


    //     case 2:

    //     break;



    //     case 3:

    //     break;


    //     default:

    //     break;


    // }


    struct LinkList l1;
    setFunction(&l1, 1);

    struct LinkList l2;
    setFunction(&l2, 2);

    struct LinkList l3;
    setFunction(&l3, 3);

    struct LinkList l4;
    setFunction(&l4, 4);

    struct LinkList l5;
    setFunction(&l5, 5);

    l1.next = &l2;
    l2.next = &l3;
    l3.next = &l4;
    l4.next = &l5;

    printf("%d\n", l1.data);
    printf("%d\n", l1.next->data);
    printf("%d\n", l1.next->next->data);
    printf("%d\n", l1.next->next->next->data);
    printf("%d\n", l1.next->next->next->next->data);

    return 0;
}
