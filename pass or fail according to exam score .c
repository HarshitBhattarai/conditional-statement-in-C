#include <stdio.h>

int main() {
    int score;

    printf("Enter the exam score (out of 100): ");
    scanf("%d", &score);

    if (score >= 0 && score <= 100) 
	{

    if (score >= 50) {
    printf("Congratulations! You passed the exam");
    } else {
    printf("Sorry, you failed the exam. Please try again");
    }
    
    } else
	 
	{
         
    printf("Invalid score entered. Please enter a score between 0 and 100");
    }

    return 0;
}
