#include <stdio.h>
#include <stdlib.h>

int main(){
	int height;
	scanf("%d", &height);
	int n = 1, len = 2*height-1;
	for(int i=0; i<height; i++){
		for(int j=0; j<(len-n)/2; j++)
			printf("%c", 32);
		for(int j=0; j<n; j++)
			printf("%c", '*');
		for(int j=0; j<(len-n)/2; j++)
			printf("%c", 32);
		n=n+2;
		printf("\n");
	}
	return 0;
}
