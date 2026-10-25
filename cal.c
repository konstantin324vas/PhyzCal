#include <stdio.h>
#include "phyz.h"

int main (int argc, char *argv[]) {
	Quantity test;
	test.value=10.0;
	test.koef=1000;
	test.dimension.L=1;
	test.dimension.M=0;
	test.dimension.T=0;
	test.dimension.I=0;
	test.dimension.K=0;
	test.dimension.N=0;
	test.dimension.J=0;
	printQuantity(test);
	printf("\n");
	Quantity test2;
	test2.value=3600;
	test2.koef=1;
	test2.dimension.L=0;
	test2.dimension.M=0;
	test2.dimension.T=1;
	test2.dimension.I=0;
	test2.dimension.K=0;
	test2.dimension.N=0;
	test2.dimension.J=0;
	printQuantity(test2);
	printf("\n");
	Quantity test3 = delQuantity(test,test2);
	test3=delQuantity(test3,test2);
	printQuantity(test3);
	return 0;
}
