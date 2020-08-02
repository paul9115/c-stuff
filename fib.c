#include <stdio.h>

/*
    TODO:
        Write a recursive function that returns the nth fibonacci number 
*/

unsigned long long int fib(unsigned int n);

int main(void){
    unsigned long long int result;
    unsigned int n;

    printf("%s", "Enter an integer: ");
    scanf("%u", &n);
    result = fib(n);
    printf("%s%u%s%llu\n", "Fibonacci (", n, ") = ", result);
}

unsigned long long int fib(unsigned int n) {
    if(n == 0 || n == 1){
        return n;
    }else {
        return fib(n - 1) + fib(n - 2);
    }
}