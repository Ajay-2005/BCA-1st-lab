#include<stdio.h>
#include<string.h>

int main() {
	int f, sec, length, i; 
	char s[15];

	printf("Enter a String: ");
	scanf("%[^\n]s", s);

	f = s[0];
	printf("The short form is %c", f);

	length = strlen(s);
	for (i = 1; i < length; i++) {
		if (s[i] == ' ') { 
			sec = s[i + 1];
		}
	}

	printf("%c\n", sec); 

	return 0; 
}

