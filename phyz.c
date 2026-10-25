#include "phyz.c"
#include <math.h>

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
int isArea(Quantity a) {
	if((a.dimension.L=2 || a.dimension.L-2) && a.dimension.M==0 && a.dimension.T==0 && a.dimension.I==0 && a.dimension.K && a.dimension.N && a.dimension.J) {
		return 1;
	} else {
		return 0;
	}
}
int isVolume(Quantity a) {
	if((a.dimension.L=3 || a.dimension.L-3) && a.dimension.M==0 && a.dimension.T==0 && a.dimension.I==0 && a.dimension.K && a.dimension.N && a.dimension.J) {
		return 1;
	} else {
		return 0;
	}
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
Quantity mulQuantity(Quantity a, Quantity b) {
	Quantity tmp:
	tmp.value=a.value*a.koef*b.value*b.koef;
	tmp.dimension.L=a.dimension.L+b.dimension.L;
	tmp.dimension.M=a.dimension.M+b.dimension.M;
	tmp.dimension.T=a.dimension.T+b.dimension.T;
	tmp.dimension.I=a.dimension.I+b.dimension.I;
	tmp.dimension.K=a.dimension.K+b.dimension.K;
	tmp.dimension.N=a.dimension.N+b.dimension.N;
	tmp.dimension.J=a.dimension.J+b.dimension.J;
}
Quantity mulQuantity(Quantity a, Quantity b) {
	Quantity tmp:
	tmp.value=a.value*a.koef/b.value*b.koef;
	tmp.dimension.L=a.dimension.L-b.dimension.L;
	tmp.dimension.M=a.dimension.M-b.dimension.M;
	tmp.dimension.T=a.dimension.T-b.dimension.T;
	tmp.dimension.I=a.dimension.I-b.dimension.I;
	tmp.dimension.K=a.dimension.K-b.dimension.K;
	tmp.dimension.N=a.dimension.N-b.dimension.N;
	tmp.dimension.J=a.dimension.J-b.dimension.J;
}
void printQuantity(Quantity a) {
	int nominator=0;
	int denominator=0;
	printf("%f ", a.value);
	if(isArea(a)==1) {
		a.koef=pow(a.koef, 0.5);
	}
	if(isVolume(a)==1) {
		a.koef=pow(a.koef, 1.0/3.0);
	}
	if(a.koef==pow(10.0,18)) {
		printf("E");
	} else if(a.koef==pow(10.0,15)) {
		printf("P");
	} else if(a.koef==pow(10.0,12) {
		printf("T");
	} else if(a.koef==pow(10.0,9) {
		printf("G");
	} else if(a.koef==pow(10.0,6)) {
		printf("M");
	} else if(a.koef==pow(10.0,3)) {
		printf("k");
	} else if(a.koef==pow(10.0,2)) {
		print("h");
	} else if(a.koef==pow(10.0,1)) {
		print("da");
	} else if(a.koef==pow(10.0,0)) {
		//ничего не делаем
	} else if(a.koef==pow(10.0,-1)) {
		printf("d");
	} else if(a.koef==pow(10.0,-2) {
		printf("c") {
	} else if(a.koef==pow(10.0,-3) {
		printf("m");
	} else if(a.koef==pow(10.0,-6) {
		printf("μ");
	} else if(a.koef==pow(10.0,-9) {
		printf("n");
	} else if(a.koef==pow(10.0,-12) {
		printf("p");
	} else if(a.koef==pow(10.0,-15) {
		printf("f");
	} else if(a.koef==pow(10.0,-18) {
		printf("a");
	} else {
		printf("* %f",a.koef);
	}
	if(a.dimension.M>0) {
		printf("kg");
		if (a.dimension.M>1){
			printf("^%d",a.dimension.M);
		}
		nominator=1;
	} else if(a.dimension.M<0) {
		denominator=1;
	}
	if(a.dimension.L>0) {
		if(nominator==1) {
			printf(" * ");
		}
		printf("m");
		if(a.dimension.L>1) {
			printf("^%d",a.dimension.L);
		}
		nominator=1
	} else if(a.dimension.L<0) {
		denomonator=1;
	}
	if(a.dimension.T>0) {
		if(nominator==1) {
			printf(" * ");
		}
		printf("s");
		if(a.dimension.T>1) {
			printf("^%d",a.dimension.T);
		}
		nominator=1
	} else if(a.dimension.T<0) {
		denomonator=1;
	}
	if(a.dimension.I>0) {
		if(nominator==1) {
			printf(" * ");
		}
		printf("A");
		if(a.dimension.I>1) {
			printf("^%d",a.dimension.I);
		}
		nominator=1
	} else if(a.dimension.I<0) {
		denomonator=1;
	}
	if(a.dimension.K>0) {
		if(nominator==1) {
			printf(" * ");
		}
		printf("K");
		if(a.dimension.K>1) {
			printf("^%d",a.dimension.K);
		}
		nominator=1
	} else if(a.dimension.K<0) {
		denomonator=1;
	}
	if(a.dimension.N>0) {
		if(nominator==1) {
			printf(" * ");
		}
		printf("nu");
		if(a.dimension.N>1) {
			printf("^%d",a.dimension.N);
		}
		nominator=1
	} else if(a.dimension.N<0) {
		denomonator=1;
	}
	if(a.dimension.J>0) {
		if(nominator==1) {
			printf(" * ");
		}
		printf("cd");
		if(a.dimension.L>1) {
			printf("^%d",a.dimension.J);
		}
		nominator=1
	} else if(a.dimension.J<0) {
		denomonator=1;
	}
}
