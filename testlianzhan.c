#include "lianzhan.h"

int main(int argc,char **argv){
	LinkStack *s = InitStack();
	Push(s,80);
	Push(s,90);
	Pop(s);
	Push(s,70);
	printf("%d",GetTop(s));
}
