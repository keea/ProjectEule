/*
* 1부터 100까지 자연수에 대해 "합의 제곱"과 "제곱의 합"의 차이
* @date     Thu Apr 20 19:13:04 2017
* @author   keea
*/

#include <stdio.h>
#include <math.h>

void main() {
	double startNum = 1;
	double lastNum = 100;
	double sumOfSqu = 0; //제곱의 합
	double squOfSum = 0; //합의 제곱

	while (startNum <= lastNum)
	{
		sumOfSqu = sumOfSqu + pow(startNum, 2.0);
		squOfSum = squOfSum + startNum;
		startNum = startNum + 1;
	}

	printf("%0.f\r\n", pow(squOfSum, 2) - sumOfSqu);
}