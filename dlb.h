#ifndef dlb_h
#define dlb_h

#include<stdlib.h>
#include <stdio.h>

typedef int DataType;
typedef struct node_{
	DataType data;
	struct node_ *next;
}Node;

typedef struct list_{
	Node *head;
	Node *tail;
	Node *current;
}List;

void initList(List *);
void insertList(List *list,int loc,DataType data);
void addHead(List *,DataType);
void addTail(List *,DataType);
void delNode(List *,DataType);
Node *getNode(List *,DataType);
int getLength(List *);
void dispList(List *);

#endif
