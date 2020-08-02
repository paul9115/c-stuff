#include <stdio.h>
#include <sys/types.h>

/* 
    TODO:
        Write a recursive function to print the factorial of the integers 0 - 21
*/

unsigned long long int factorial(unsigned int num);
    
int main(void){
    for(int i = 0; i <= 21; i++) {
        printf("%u! = %llu\n", i, factorial(i));
    }
}

unsigned long long int factorial(unsigned int num) {
    if(num <= 1){
        return 1;
    }else{
        return (num * factorial(num -1));
    }
}
