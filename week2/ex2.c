#include <stdio.h>
#include <stdlib.h>

int main(){
	char ch[1000];
	scanf("%s", ch);
	int i;
	for(i=0;i<1000;i++){
		if(ch[i]=='\0') break;
	}
	for(;i>=0;i--){
		printf("%c", ch[i]);
	}
	return 0;
}

