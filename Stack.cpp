#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
	
};

struct node *top = NULL;

int push(int data){


	if(top==NULL){
		
		struct node *newP = (struct node *)malloc(sizeof(struct node));
		newP->data=data;
		newP->next=NULL;
		
		top = newP;
	}	
	else{
		
		struct node *newP = (struct node *)malloc(sizeof(struct node));
		
		newP->data=data;
		newP->next=top;
		top = newP;
		
	}
}

int display(){
	
	struct node *index = top;
	
	if(index==NULL){
		printf("Stack is empty");
		
	}
	
	while(index!=NULL){
		printf("%d ",index->data);
		index = index->next;
	}	
	
}

int pop(){
	if(top==NULL){
		printf("Stack is empty");
	}
	
	struct node *temp = top;
	
	top = top->next;
	
	free(temp);
	
}

int main(){

	push(1);
	push(2);
	push(4);

	display();
	printf("\n");
	
	pop();
	display();
	printf("\n");
	
	push(5);
	push(8);
	display();
	printf("\n");
	
	pop();
	pop();
	display();
}
