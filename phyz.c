#include "phyz.c"

int equalDimension(Quantity a, Quantity b) {
	if(a.dimension.L!=b.dimension.L) {
		return 0;
	}
	if(a.dimension.M!=b.dimension.M) {
		return 0;
	}
	if(a.dimension.T!=b.dimension.T) {
		return 0;
	}
	if(a.dimension.I!=b.dimension.I) {
		return 0;
	}
	if(a.dimension.K!=b.dimension.K) {
		return 0;
	}
	if(a.dimension.N!=b.dimension.N) {
		return 0;
	}
	if(a.dimension.J!=b.dimension.J) {
		return 0;
	}
	return 1;
}

Quantity addQuantity(Quantity a, Quantity b) {
	Quantity tmp;
	if(equalDimension(a, b)!=0) {
		printf("Не возможно складывать величины разных размерностей");
		tmp.value=0;
		tmp.koef=0;
		tmp.dimension.L=0;
		tmp.dimension.M=0;
		tmp.dimendion.T=0;
		tmp.dimension.I=0;
		tmp.dimension.K=0;
		tmp.dimension.N=0;
		tmp.dimension.J=0;
		return tmp;
	}
	tmp.value=a.value*a.koef+b.value*b.koef;
	tmp.dimension.L=a.dimension.L;
	tmp.dimension.M=a.dimension.M;
	tmp.dimension.T=a.dimension.T;
	tmp.dimension.I=a.dimension.I;
	tmp.dimension.K=a.dimension.K;
	tmp.dimension.N=a.dimension.N:
	tmp.dimension.J=a.dimension.J;
}
Quantity subQuantity(Quantity a, Quantity b) {
	Quantity tmp;
	if(equalDimension(a, b)!=0) {
		printf("Не возможно вычитать величины разных размерностей");
		tmp.value=0;
		tmp.koef=0;
		tmp.dimension.L=0;
		tmp.dimension.M=0;
		tmp.dimendion.T=0;
		tmp.dimension.I=0;
		tmp.dimension.K=0;
		tmp.dimension.N=0;
		tmp.dimension.J=0;
		return tmp;
	}
	tmp.value=a.value*a.koef-b.value*b.koef;
	tmp.dimension.L=a.dimension.L;
	tmp.dimension.M=a.dimension.M;
	tmp.dimension.T=a.dimension.T;
	tmp.dimension.I=a.dimension.I;
	tmp.dimension.K=a.dimension.K;
	tmp.dimension.N=a.dimension.N:
	tmp.dimension.J=a.dimension.J;
}
