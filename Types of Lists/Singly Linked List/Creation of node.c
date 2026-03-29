#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
 };
typedef struct node *NODE;

NODE createNode() {
	NODE temp;
	temp=(NODE)malloc(sizeof(struct node));
	
	temp->next=NULL;
	return temp;

printf("Enter element of first node: %d",temp->data);
	printf("Enter element of second node: %d",temp->data);
}
