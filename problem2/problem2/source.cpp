#include <stdio.h>

int piboNa(int sum, int before) {
	int piboNum = sum + before;
	return piboNum;
}

void main()
{
	int startNum = 1; 
	int lastNum = 4000000;
	int sum = 0; 

	int allSum = 0;

	while (startNum <= lastNum)
	{
		int pibo = piboNa(sum, startNum);
		
		sum = startNum;

		printf("%i\r\n", sum);

		if (sum % 2 == 0) {
			allSum = allSum + sum;
		}

		startNum  = pibo;
	}

	printf("%d", allSum);
}