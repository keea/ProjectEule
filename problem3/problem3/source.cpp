/*
* 600851475143�� ���μ� �߿��� ���� ū ���� ���ϼ���.
* @date     Wed Apr 19 17:28:46 2017
* @author   keea
*/

#include <stdio.h>
#include <time.h>

void PrimeNum(long long num, long long * bigNum);

void main() {
	long long num = 600851475143;
	long long startNum = 2;
	long long lastNum = num;
	long long bigNum = 0;

	//�μ������ϱ�
	while (startNum < lastNum)
	{
		if (num % startNum == 0) {
			lastNum = num / startNum;
			PrimeNum(startNum, &bigNum);
			PrimeNum(lastNum, &bigNum);
		}

		startNum = startNum + 1;
	}

	printf("%lli\r\n", bigNum);
}

/*
* �Ҽ� ���ϱ�
* @param  
* @return
* @date   Wed Apr 19 17:28:15 2017
*/
void PrimeNum(long long num, long long * bigNum) {
	int i = 2;

	while (i <= num)
	{
		if (i == num) {
			if (*bigNum < num) {
				*bigNum = num;
			}
		}

		if (num%i == 0) {
			break;
		}

		i = i + 1;
	}
}