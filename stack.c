#include<stdio.h>

#define MAX 100

int stack[MAX];
int sp = 0;

void
push(int op) {
	if(sp >= MAX)
		printf("error: stack full\n");
	else
		stack[sp++] = op;
}

int
pop(void) {
	if(sp > 0)
		return stack[--sp];
	else {
		printf("error: stack empty\n");
		return '0';
	}
}

int
empty(void) {
	return (sp > 0) ? 0 : 1;
}

int 
topstack(void)
{
	int tops = 0;
	if(sp >= 0)
		tops = stack[--sp];
	sp++;
	return tops;
}

void cleanstack(void) {
	while(sp > 0)
		sp--;
}