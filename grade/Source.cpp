#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main()
{
	float score[8];
	float n, x, y;
	int i;

	for (i = 0; i < 8; i++) {
		printf("Enter score[%d]: ", i + 1);
		scanf("%f", &score[i]);
	}

	for (i = 0; i < 8; i++) {
		if (score[i] >= 80) {
			printf("\nScore[%d] = %.2f , You Grade : A \n", i + 1, score[i]);
		}
		else if (score[i] >= 75) {
			printf("\nScore[%d] = %.2f , You Grade : B+ \n", i + 1, score[i]);
		}
		else if (score[i] >= 70) {
			printf("\nScore[%d] = %.2f , You Grade : B \n", i + 1, score[i]);
		}
		else if (score[i] >= 65) {
			printf("\nScore[%d] = %.2f , You Grade : C+ \n", i + 1, score[i]);
		}
		else if (score[i] >= 60) {
			printf("\nScore[%d] = %.2f , You Grade : C \n", i + 1, score[i]);
		}
		else if (score[i] >= 55) {
			printf("\nScore[%d] = %.2f , You Grade : D+ \n", i + 1, score[i]);
		}
		else if (score[i] >= 50) {
			printf("\nScore[%d] = %.2f , You Grade : D \n", i + 1, score[i]);
		}
		else if (score[i] < 50) {
			printf("\nScore[%d] = %.2f , You Grade : F \n", i + 1, score[i]);
		}
	}
	
}