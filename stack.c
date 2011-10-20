#include<stdio.h>

#define MAX 100

int stack[MAX];
int sp = 0;

void
push(int op)
{
	if(sp >= MAX)
		printf("error: stack full\n");
	else
		stack[sp++] = op;
}

int
pop(void)
{
	if(sp > 0)
		return stack[--sp];
	else {
		printf("error: stack empty\n");
		return '0';
	}
}

int
empty(void) {
	return (sp == 0) ? 1 : 0;
}

int 
topstack(void)
{
	return stack[sp];
}

void cleanstack(void) {
	while(sp > 0)
		sp--;
}