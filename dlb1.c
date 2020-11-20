#include "dlb.h"
/* int main(int argc,char **argv){
  List *list = (List *)malloc(sizeof(list));
  initList(list);
  addHead(list,4):
  addHead(list,6);
  addHead(list,8);
  addHead(list,10);
  dispList(list);
  printf("the list:%d\n",getLength(list));

  return 0;
}

   */
#define n 11
#define m 3

struct node {
	int no;
	node *next;
};

int main (int argc,char **argv ){
	int k = 0;
	node *p,*q,*r;
	p = q =(node*)malloc(sizeof(node));
	p -> no = 1;
	
	for(int i=2;i<=n;i++){
		r = (node*)malloc(sizeof(node));
		r->no = i;
		q->next = r;
		q = r;
	}
	q->next = p;

	q = p;
	while(q->next !=q){
		k++;
		if(k == m){
			p->next = q->next;
			free(q);
			q = p->next;
			k = 0;
		}else{
			p = q;
			q = q->next;
		}
	}
	printf("最后一个获胜者的编号是:%d\n",q->no);
}


















