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
}

NODE insertAtBegin(NODE first, int x) {
	NODE temp;
	temp=createNode();
	temp->data=x;
	temp->next=first;
	first=temp;
	return first;
}

int count(NODE first) {
	int c=0;
	NODE temp=first;
	while(temp!=NULL){
		c++;
		temp=temp->next;
	}
	return c;
}

void traverseList(NODE first) {
	NODE temp = first;
	while (temp != NULL) {
		printf("%d --> ",temp -> data);
		temp = temp -> next;
	}
	printf("NULL\n");
}
