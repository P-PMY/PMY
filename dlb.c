#include "dlb.h"

void initList(List *list){
	list->head = NULL;
	list->tail = NULL;
	list->current = NULL;

	return;
}

void insertList(List *list,int loc,DataType data){
       Node *node = (Node *)malloc(sizeof(Node));
       Node *prev = (Node *)malloc(sizeof(Node));
       
       if(loc<=1){
               node->data = data;
	       node->next = NULL;
	       if(list->head == NULL){
		       list->tail = node;
	       }else{
		       node->next = list->head;
	       }list->head = node;
       }else{
	       prev = list->head;
	       node->data = data;
	       node->next = NULL;
	       if(list->head = NULL){
		       list->tail = node;
	       }
	       for(int size=1;size<loc-1;size++){
		       prev = prev->next;
	       }
	       node->next = prev->next;
	       prev->next = node;
       }

       node = list->head;
       while(node->next != NULL){
	       node = node->next;
       }
       list->tail = node;
}

void addHead(List *list,DataType data){
	Node *node = (Node *)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;

	if(list->head == NULL){
		list->tail = node;
	}else{
		node->next = list->head;
	}
	list->head = node;

	return;
}

void addtail(List *list,DataType data) {
	Node *node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;
	
	if(list->head == NULL){
	list->head  = node;
	} else{
	list->tail->next = node;
	}

	list->tail = node;

	return; 
	}

void delNode(List *list,DataType data) {
	Node *prev = list->head;
	Node *node = prev->next;

	while(node != NULL){
		if(node->data == data){
			prev->next = prev->next->next;
		}else{
			prev->next = node;
		}
	}
}

Node *getNode(List *list,DataType data){
	Node *node = (Node *)malloc(sizeof(Node));
	node = list->head;

	while(node!=NULL){
		if(data == node->data){
			return node;
		}else{
			node = node->next;
		}
	}

	return NULL;
}

int getLength(List *list){
	Node *node = (Node*)malloc(sizeof(Node));
	node = list->head;
	int i=0;
	while(node !=NULL){
		node = node->next;
		i++;
	}

	return i;
}

void dispList(List *list){
	Node *node = (Node *)malloc(sizeof(Node));
	node = list->head;
	int i=0;
	while(node != NULL){
		printf("the %dth node:%d\n",i+1,node->data);
		node = node->next;
		i++;
	}
	printf("display finished\n");

		return;
}




