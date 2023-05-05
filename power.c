#include<stdio.h>
int main(){
    int number1;
    long int number2;
    long double result = 1.0;
    printf("Enter first number: ");
    scanf_s("%d", &number1);
    printf("Enter second number: ");
    scanf_s("%ld", &number2);
    if (number2 >= 0){
       while (number2 != 0){
         result *= number1;
         --number2;
       }
        printf("Answer = %.0Lf\n", result);
    }
    else {
       printf("Enter non negitive input\n");
    }
    getchar(); getchar();
    return 0;
}