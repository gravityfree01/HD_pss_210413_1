#include<stdio.h>
void main(){

	int i = 1;
	while (i < 5) {
		int j = 1;
		while (j <= i) {
			printf("%d", j);
			j++;
		}
		i++;
		printf("\n");
	}

	i = 3;
	while (i >= 1) {
		int k = 1;
		while (k <= i) {
			printf("%d", k);
			k++;

		}
		i--;
		printf("\n");

	}
	fgetc(stdin);
}