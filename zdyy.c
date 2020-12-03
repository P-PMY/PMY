#include "zdyy.h"

int priority(char x){
	switch(x){
		case '+':
                case '-':
                case '=': return 1;
                case '*': 			  
                case '/': return 2;
                case '(': return 3;
	}
}

double compute(double x,double y,char op){
	switch(op){
	case '+': return x+y;
        case '-': return x-y;
	case '*': return x*y;
        case '/': return x/y;
   }
}

