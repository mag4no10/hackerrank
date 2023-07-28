#include <stdio.h>


int main() {
	int num1, num2;
    float num3, num4;
    scanf("%d %d \n %f %f", &num1, &num2, &num3, &num4);
    int isum = num1 + num2, idiff = num1 - num2;
    float fsum = num3 + num4, fdiff = num3 - num4;
    printf("%d %d\n%0.1f %0.1f", isum, idiff, fsum, fdiff);
    return 0;
}