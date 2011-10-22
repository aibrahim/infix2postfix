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
higherp(int a, int b) {
	if(b == '*' || b == '/')
		return 1;
	if(b == '-' && a == '+')
		return 1;
	if(b == '+' && a == '-')
		return 1;
	if(b == '*' && a == '/')
		return 1;
	if(b == '/' && a == '*')
		return 1;
	return 0;
}
