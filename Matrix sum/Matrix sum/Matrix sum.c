
#include <stdio.h>

int main()
{
	int a, b, m[20][20], n[20][20], s[20][20];
	int i, j;

	printf("Introduceti numarul coloanelor 1 matrixe \n");
	scanf_s("%d", &a);
	printf("Introduceti numarul de coloane 2 matrixe \n");
	scanf_s("%d", &b);

	printf("Introduceti elementele 1 matrixe \n");
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			printf("Elementele intrate [%d][%d] : ", i + 1, j + 1);
			scanf_s("%d", &m[i][j]);
		}
	}
	

	printf("Introduceti elementele 2 matrixe \n");
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			printf("Elementele intrate [%d][%d] : ", i + 1, j + 1);
			scanf_s("%d", &n[i][j]);
		}
	}
	

	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			s[i][j] = 0;
			s[i][j] = m[i][j] + n[i][j];
		}
	}
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			printf("%d\t",s[i][j]);
		}
	}
	return 0;
}	
