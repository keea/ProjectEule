#include <stdio.h>

//1000���� ���� �ڿ��� �߿��� 3 �Ǵ� 5�� ����� ��� ���� ��
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