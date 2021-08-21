#include <stdio.h>

void square(int);

int main() {
	int n = 0;

	scanf("%d", &n);

	square(n);

}

void square(int n) {
	if (n == 1) {
		return;
	}
	else {
		for (int i = 0; i < n; i++) {
			square(n / 3);
			for (int j = 0; j < n; j++) {
				if (i == 1 && j == 1) {
					printf(" ");
				}
				else {
					printf("*");
				}
			}
		}
		printf("\n");

	}
}
