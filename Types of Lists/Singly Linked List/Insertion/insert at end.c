struct node {
	int data;
	struct node *next;
};
typedef struct node *NODE;

NODE createNode() {
	NODE temp;
	temp = (NODE) malloc(sizeof(struct node));
	temp -> next = NULL;
	return temp;
}

NODE insertAtEnd(NODE first, int x) {
	NODE temp,cur;
	temp=createNode();
	temp->data=x;
	if(first==NULL){
		first=temp;
		return first;
	}
	cur=first;
	while(cur->next!=NULL){
		cur=cur->next;
	}
	cur->next=temp;
	return first;
}

void traverseList(NODE first) {
	NODE temp=first;
	while(temp!=NULL){
		printf("%d --> ",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}
