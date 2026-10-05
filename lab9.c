#include <stdio.h>
int main() {

double num1, num2;
printf("Enter two numbers: ");
scanf("%lf %lf", &num1, &num2);
printf("Addition (%.2lf + %.2lf) = %.2lf\n", num1, num2, num1 + num2);
printf("Subtraction (%.2lf - %.2lf) = %.2lf\n", num1, num2, num1 - num2);
printf("Multiplication (%.2lf * %.2lf) = %.2lf\n", num1, num2, num1 * num2);
if (num2 != 0) {
printf("Division (%.2lf / %.2lf) = %.2lf\n", num1, num2, num1 / num2);
printf("Modulo ((int)%.0lf %% (int)%.0lf) = %d\n", num1, num2, (int)num1 % (int)num2);
} else {
printf("Division and Modulo by zero are undefined.\n");
}
return 0;
}