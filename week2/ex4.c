#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int* b){
	int temp;
	temp = *b;
	*b=*a;
	*a=temp;
}

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	swap(&a,&b);
	printf("%d %d", a, b);
}
