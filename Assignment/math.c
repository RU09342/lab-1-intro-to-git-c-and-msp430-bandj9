
include "math.c"

int math(int n1, int n2, char operator){

	switch(operator){

		case '+':
			return (n1+n2);
		case '-';
			return (n1-n2);
		case '*':
			return (n1*n2);
		case '/';
			return (n1/n2;
		case '%':
			return (n1%n2);
		default:
			return 0;
	}
}
		