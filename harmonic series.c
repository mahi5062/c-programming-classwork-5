#include <stdio.h>
int main() 
{
    int n, i;
    float sum = 0; 
    printf("Input the number of terms: ");
    scanf("%d", &n);
    printf("1");
    for (i = 2; i <= n; i++) 
	{
        printf(" + 1/%d", i);
        sum += 1/i;
    }
    printf("\nSum of Series upto %d terms: %f\n", n, sum+1);
    return 0;
}
