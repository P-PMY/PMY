#include <stdio.h>
#include "liandl.h"

int main(int argc,char **argv){
	Deque *dq = createDeque();
	push_back(dq,66);
	push_front(dq,92);
	push_back(dq,50);
	puch_front(dq,25);
	printf("队列的元素个数为:%d\n",size(dq));
	printf("队头元素为:%d\n",front(dq));
	printf("队尾元素为:%d\n",back(dq));
}
