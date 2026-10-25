#typedef struct Dimension {
	int L, M, T, I, K, N, J; //Соовественно: Длинна, Масса, Время, Сила тока, Темпервтура, Количество вещества, Сила света
} Dimension;

#typedef struct Quantity {
	float value;
	float koeff;
	Dimension dimension;
} Quantity;

int equalDimension (Quantity a, Quantity b);
int isArea(Quantity a);
int isVolume(Quantity a);

Quantity addQuantity (Quantity a, Quantity b);
Quantity subQuantity (Quantity a, Quantity b);
Quantity mulQuantity (Quantity a, Quantity b);
Quantity delQuantity (Quantity a, Quantity b);

void printQuantity (Quantity a);
