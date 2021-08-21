#include <iostream>
#include <string>
using namespace std;

bool isValid(int, int);
int getCount(int);

int main() {
	int n = 0;
	scanf("%d", &n);

	int count = getCount(n);

	int base = n - 10 * count;
	int flag = 0;
	for (int i = 0; i < count*10; i++) {
		if (isValid(n, base + i)) {
			printf("%d", base + i);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		printf("0");
}

int getCount(int n) {
	return to_string(n).size();
}

bool isValid(int n, int candidate) {
	int count = getCount(candidate);
	string num = to_string(candidate);

	int result = candidate;
	for (int i = 0; i<count; i++) {
		result += num[i] - '0';
	}

	if (result == n)
		return true;
	else
		return false;
}