#include <stdio.h>
#include <string.h>

int main() {
	char *gets(char *str);
	char yn = 'y';
	
	void run(){
		printf("enter a string\n");
		char s[20];
		fgets(s, 100, stdin);
		
		printf("What string operation do you want to perform? \n");
		printf("1 for length, 2 for compare, 3 for concatonate, 4 for copy \n");
		int op;
		scanf("%d", &op);
		
		switch (op){
			case 1:
			printf("Length is %zu \n", strlen(s));
			break;
			
			case 2:
			printf("enter another string \n");
			char comp[20];
			gets(comp);
			int a = strcmp(s, comp);
			
			if (a > 0) {
  				printf("%s is greater than %s\n", s, comp);
			} else if (a < 0) {
  				printf("%s is greater than %s\n", s, comp);
			} else {
  				printf("%s is equal to %s\n", s, comp);
			}
			break;
			
			case 3:
			break;
			
			case 4:
			break;
		}
		
		printf("perform another operation? y/n\n");
		scanf(" %c", &yn);
		
		if(yn == 'y){
			run();
		}
		else{
			printf("terminated \n");
		}
	}
	return 0;
}
