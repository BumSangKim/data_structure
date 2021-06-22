#include <stdio.h>
#include <stdlib.h>

#define Data int


typedef struct{
	struct Node *next;
	Data data;
}Node;

typedef struct{
	struct Node *next;
	struct Node *cur;
	int cnt;
}List;

void init_list(List *L) {
	L->cur = NULL;
	L->next = NULL;
	L->cnt = 0;
}

void add_list(Data d, List *L) {
	Node *newNode = (Node*)malloc(sizeof(Node));
	newNode->data = d;
	if(L->cur == NULL) {
		newNode->next = NULL;
		L->cur = newNode;
	}
	else {
		newNode->next = L->cur;
		L->next = L->cur; 
		L->cur = newNode;
	}
	L->cnt++;
}

void delete_list(List *L) {
	if(L->cur !=NULL){
		free(L->cur);
		if(L->next !=NULL){
			L->cur = L->next;
			L->next = ((Node*)L->next)->next;
		
		}
		else L->cur = NULL;
	}
	else {
		return;
	}
	L->cnt--;
}



