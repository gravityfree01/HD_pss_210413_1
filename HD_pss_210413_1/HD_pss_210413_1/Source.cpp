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
4 6
8 10 12
14 16 18 20
22
24 26
28 30 32 34
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