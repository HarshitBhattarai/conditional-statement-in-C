#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
    return 0; 
    }
    for (int i = 2; i < num; i++) {
    if (num % i == 0) {
    return 0;
    }
    }
    return 1; 
}

int main() {
    int number;

    
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isPrime(number)) 
	{
    printf("The number %d is a prime number.\n", number);
    } else {
    printf("The number %d is a composite number.\n", number);
    }

    return 0;
}
