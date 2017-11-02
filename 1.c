#include <stdio.h>
int main()
{
	int below;
	int i;
	int sum = 0;
	int three;
	int five;
	scanf("%d", &below);
	for ( i =1; i<below; i++) {
		if (i % 3 == 0) {
			three = i;
			sum += three;
		}
		else if (i % 5 == 0) {
			five = i;
			sum += five;
		}
	}
    printf("%d", sum);
    return 0;
}
/*
#include <stdio.h>
int main()
{
    int sum;
    for (int i = 0; i <= 1000; i++) {
        if (!(i % 3) || !(i % 5)) {
            sum += 1;
        }
    }
    return 0;
}
*/