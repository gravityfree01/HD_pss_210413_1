#include<stdio.h>

/*
1번문제
1
12
123
1234
123
12
1

2번문제
2
4 6
8 10 12
14 16 18 20
22
24 26
28 30 32 
34 36 38 40
*/

void main() {

	/*
	for (int i= 0; i<3; i++){

	printf("hello world");


	*/
	/*int a = 1;
	while (a < 3) {
		printf("hello world?");
		printf("\n");
		a++;
	}*/


	/*

	int nUm = 1;
		while (nUm <= 4) {
			int pnum = 1;
			while (pnum <= nUm) {
				printf("%d", pnum);
				pnum = pnum +1;
			} nUm++;

			printf("\n");
		}

	fgetc(stdin);

}
	*/


	/*
	for (int = i; i < 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");

		}
		pintf("\n");
	}

	for (int i = 3; i >= 0; i--) {

		for (int k = 1; k <= i; k++) {
			printf("*")
		}
	}

	*/

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

	int i = 3;
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