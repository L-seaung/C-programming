#include<stdio.h>

int main(){
    int firstNumber, secondNumber, SumOfTowNumbers;
    printf("Enter tow integers:");
    scanf("%d %d", &firstNumber, &secondNumber);
    SumOfTowNumbers = firstNumber + secondNumber;
    printf("%d + %d = %d", firstNumber, secondNumber, secondNumber);
    return 0;
}
