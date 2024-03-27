
/* Slow pointer and fast pointer */

/* C program to point the middle node in the single link list */
#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 25

struct node {
    int data;
    struct node *next;
};

void push(struct node **head_ref, int data)
{
	struct node *new_node;
	new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
	new_node->next = *head_ref;
	*head_ref = new_node;
}

void printList(struct node *ptr)
{
    while(ptr != NULL)
    {
		printf("[%d]->",ptr->data);
        ptr = ptr->next;
    }
	printf("\n");
}

void middleNode(struct node *head_ref)
{
	struct node *slow_ptr, *fast_ptr;
    if(head_ref == NULL)
		return;
    slow_ptr = head_ref;
	fast_ptr = head_ref;
	while(fast_ptr != NULL && fast_ptr->next != NULL)
	{
		fast_ptr = fast_ptr->next->next;
        slow_ptr = slow_ptr->next;
	}
	printf("Middle node = %d\n", slow_ptr->data);
}
void freeLink(struct node **head_ref)
{
	struct node *free_node = NULL;
	while(*head_ref != NULL)
	{
		free_node = *head_ref;
        *head_ref = free_node->next;
		free(free_node);
		free_node = NULL;
	}
}

int main()
{
    struct node *head = NULL;
    int i=1;

    for (i=MAX_NODES ; i>0; i--)
    {
		push(&head, i);
		printList(head);
		middleNode(head);
    }
	freeLink(&head);
	return 0;
}
