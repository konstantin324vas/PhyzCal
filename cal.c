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
	return 0;
}
