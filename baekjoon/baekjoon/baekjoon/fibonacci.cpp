#include <stdio.h>

int fibo(int);

int main() {
	int n = 0;
	int result = 0;

	scanf("%d", &n);

	printf("%d\n", fibo(n));
	return 0;
}

int fibo(int n) {
	if(n == 0)
		return n;
	else if(n == 1)
		return fibo(n - 1) + n;

	return fibo(n - 1)+ fibo(n-2);
}
