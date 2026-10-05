#include <stdio.h>

int main() {
float num1, num2, sum;
printf("Enter two float numbers: ");
scanf("%f %f", &num1, &num2);
sum = num1 + num2;
printf("(%.2f + %.2f = %.2f)\n", num1, num2, sum);
return 0;
}