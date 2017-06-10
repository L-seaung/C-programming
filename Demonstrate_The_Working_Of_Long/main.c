#include<stdio.h>
int main() {
    int a;
    long b;
    long long c;
    double e;
    long double f;
    printf("size of int = %1d bytes \n", sizeof(a));
    printf("size of long = %1d bytes \n", sizeof(b));
    printf("size of long long = %1d bytes \n", sizeof(c));
    printf("size of double = %1d bytes \n", sizeof(e));
    printf("size of long double = %1d\n", sizeof(f));
    return 0;
}
