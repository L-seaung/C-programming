#include<stdio.h>
int main() {
    int intergerType;
    float floatType;
    double doubleType;
    char chatType;

    //sizeof operator is used to evaluate the size of a variable
    printf("size of int:%1d bytes\n", sizeof(intergerType));
    printf("size of float: %1d bytes\n", sizeof(floatType));
    printf("size of double: %1d bytes\n", sizeof(doubleType));
    printf("size of char:%1d byte\n", sizeof(charType));

    return 0;
}
