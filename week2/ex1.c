#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <stdio.h>

int main(){
	int int_var = INT_MAX;
	float float_var = FLT_MAX;
	double double_var = DBL_MAX;
	printf("%d\n%g\n%lf", int_var, float_var, double_var);
	return 0;
}
