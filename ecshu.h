#ifndef ecshu_h
#define ecshu_h

#include <stdio.h>
#include <malloc.h>
#define MaxSize 100

typedef char dataType;
typedef struct treeNode {
	dataType data;
	struct treeNode *left,*right;
}TreeNode;

void CreateTree(TreeNode *t,dataType x);
void PreOrder(TreeNode *t);
void InOrder(TreeNode *t);
void PostOrder(TreeNode *t);
void LevelOrder(TreeNode *t);

#endif
