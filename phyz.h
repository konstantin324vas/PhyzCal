typedef enum {
	KIND_NONE=0,
	KIND_J=1,
	KIND_N_M=2,
	KIND_GZ=3,
	KIND_BQ=4;
	KIND_LX=5,
	KIND_CD_M2=6;
	KIND_HEATCAP=7,
	KIND_ENTROPY=8,
	KIND_CD=9,
	KIND_LM=10;
} KindQuantity;
typedef struct Dimension {
	int L, M, T, I, K, N, J; //Соовественно: Длинна, Масса, Время, Сила тока, Темпервтура, Количество вещества, Сила света
} Dimension;

typedef struct Quantity {
	float value;
	float koef;
	Dimension dimension;
	KindQuantity kind;
} Quantity;

int equalDimension (Quantity a, Quantity b);
int isArea(Quantity a);
int isVolume(Quantity a);

Quantity addQuantity (Quantity a, Quantity b);
Quantity subQuantity (Quantity a, Quantity b);
Quantity mulQuantity (Quantity a, Quantity b);
Quantity delQuantity (Quantity a, Quantity b);

void printQuantity (Quantity a);
