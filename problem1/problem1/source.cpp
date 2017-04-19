#include <stdio.h>

//1000보다 작은 자연수 중에서 3 또는 5의 배수를 모두 더한 수
void main() {
	int startNum = 1;
	int lastNum = 1000;
	int sum = 0;
	while (startNum < lastNum)
	{
		if (startNum % 3 == 0 || startNum % 5 == 0) {
			sum = sum + startNum;
		}
		startNum = startNum + 1;
	}

	printf("%i\r\n", sum);
}