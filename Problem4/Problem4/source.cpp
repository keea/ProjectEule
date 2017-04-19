/*
* 세 자리 수를 곱해 만들 수 있는 가장 큰 대칭수는?
* @date     Wed Apr 19 11:35:09 2017
* @author   keea
*/

#include <stdio.h>
#include <stdlib.h>

bool isPaliNum(int num);

void main() {
	int a = 999;

	int bigNum = 0;

	while (a>=100)
	{
		int b = 999;
		while (b>=100)
		{
			if (isPaliNum(a*b)) {
				if (bigNum < a*b) {
					bigNum = a*b;
				}
			}
			b = b - 1;
		}
		a = a - 1;
	}

	printf("%d\r\n", bigNum);
}

/*
* 대칭수 인지 판별한다.
* @param
* @return
* @date   Wed Apr 19 14:35:36 2017
*/
bool isPaliNum(int num) {

	int check1 = 1;
	int check2 = 1;
	int check3 = 1;

	int temp = num;

	int num0 = temp / 100000;
	temp = temp % 100000;
	int num1 = temp / 10000;
	temp = temp % 10000;
	int num2 = temp / 1000;
	temp = temp % 1000;
	int num3 = temp / 100;
	temp = temp % 100;
	int num4 = temp / 10;
	temp = temp % 10;
	int num5 = temp;

	if (num0 != 0) {
		check1 = num0 == num5;
		check2 = num1 == num4;
		check3 = num2 == num3;
	}
	else {
		check1 = num1 == num5;
		check2 = num2 == num4;
		check3 = 1;
	}

	if (check1&&check2&&check3) {
		return true;
	}

	return false;

}