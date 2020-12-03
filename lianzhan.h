#ifndef zhan_h
#define zahn_h
#include <stdio.h>
#include <malloc.h>

typedef int dataType;

typedef struct node{
	dataType data;
	struct node *next;
}LinkStack;

int Empty(LinkStack *s);
void Push(LinkStack *s,dataType x);
void Pop(LinkStack *s);

#endif
