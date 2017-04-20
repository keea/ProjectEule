/*
* 10,001번째의 소수
* @date     Thu Apr 20 19:44:02 2017
* @author   keea
*/

#include<stdio.h>
bool IsPrimeNum(int num);

void main() {
	int lastNum = 10001;
	int checkNum = 2;
	int primeNum = 0;

	while (lastNum > 0)
	{
		if (IsPrimeNum(checkNum)) {
			primeNum = checkNum;
			lastNum = lastNum - 1;
		}
		checkNum = checkNum + 1;
	}

	printf("%i", primeNum);
}

/*
* 소수인지 아닌지 체크한다.
* @param  num(판별할 숫자)
* @return true(소수) false(소수가 아님)
* @date   Thu Apr 20 19:58:58 2017
*/
bool IsPrimeNum(int num) {
	int startNum = 2;
	while (startNum < num)
	{
		if (num % startNum==0) {
			return false;
		}
		startNum = startNum + 1;
	}
	return true;
}