#include<stdio.h>

#define BUFSIZE 100

char buf[BUFSIZE];
int bufs = 0;

int
getch(void) {
	return (bufs > 0) ? buf[--bufs] : getchar();
}

void
ungetch(int c) {
	if(bufs >= BUFSIZE)
		printf("error: buffer full\n");
	else
		buf[bufs++] = c;
}