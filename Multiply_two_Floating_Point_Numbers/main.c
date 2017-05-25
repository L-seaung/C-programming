#include<stdio.h>

int main(){
    double firstNumber, secondNumber, produceOfTowNumbers;
    printf("Enter tow numbers");
    scanf("%1f %1f", &firstNumber, &secondNumber);
    produceOfTowNumbers = firstNumber * secondNumber;
    printf("product = %.21f\n", produceOfTowNumbers);
    return 0;
}
