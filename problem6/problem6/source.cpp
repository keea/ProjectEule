/*
* 1���� 100���� �ڿ����� ���� "���� ����"�� "������ ��"�� ����
* @date     Thu Apr 20 19:13:04 2017
* @author   keea
*/

#include <stdio.h>
#include <math.h>

void main() {
	double startNum = 1;
	double lastNum = 100;
	double sumOfSqu = 0; //������ ��
	double squOfSum = 0; //���� ����

	while (startNum <= lastNum)
	{
		sumOfSqu = sumOfSqu + pow(startNum, 2.0);
		squOfSum = squOfSum + startNum;
		startNum = startNum + 1;
	}

	printf("%0.f\r\n", pow(squOfSum, 2) - sumOfSqu);
}