#include<stdio.h>
#include "def.h"


#define BUFSIZE 100

int
main()
{
	char buf[BUFSIZE], s[BUFSIZE], temp[BUFSIZE];
	int type;
	
	while((type = getop(s)) != EOF) {
		switch(type) {
			case NUMBER:
				addstr(buf, s);
				break;
			case '+': case '-': case '*': case '/':
				if(empty())
					push(type);
				else {
						while(higherp(topstack()) >= higherp(type)) {
							temp[0] = pop();
							temp[1] = '\0';
							addstr(buf, temp);
						}
						push(type);
				}
				break;
			case '\n':
				while(!empty()) {
					temp[0] = pop();
					temp[1] = '\0';
					addstr(buf, temp);
				}
				printf("%s\n", buf);
				buf[0] = '\0';	
				break;
		}
	}
	return 0;
}

