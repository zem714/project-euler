#include <stdio.h>
int main()
{
	int sum;
	int evensum = 0;
	int next = 0;
	int below;
	scanf("%d", &below);
	while (next <= below)
	{
		sum = 0;
		sum += 1;
		
		next = sum;
		sum += next;
		if (sum % 2 == 0) {
			evensum += sum;
		}
		
	}
	printf("%d", evensum);
	return 0;
}
