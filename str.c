void
addstr(char to[], char from[]) {
	int i, j;
	
	i = j = 0;
	while(to[i] != '\0')
		i++;
	while((to[i++] = from[j++]) != '\0')
		;	
}

/*
	check if b has higher precedence than a
 */

int
higherp(int c) {
	switch(c) {
		case '+': case '-':
			return 1;
			break;
		case '*': case '/':
			return 2;
			break;
	}
	return 0;
}
