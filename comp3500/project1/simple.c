#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int a[10],i;
	double value;
	double out = 0;
	printf("Enter 10 Numbers: \n");
	for(i = 0; i <10; i++)
	{
		scanf("%d", &a[i]);
		value = sqrt(a[i]);
		out = out + value;
	}
	out = out / 10;
	printf("\nThe averages of the roots is: ");
	printf("%.2f",out);
	printf("\n");
	return 0;
}