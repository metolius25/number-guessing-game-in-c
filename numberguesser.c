#include <stdio.h>
#include <time.h>
int main() {
    srand(time(NULL));
    int attempts = 0, number, input;
    input = rand() % 100 + 1;
    
    while ( number != input ) {
        printf("Try a number.\n");
        scanf("%i", &number);
        if (input < number)
            printf("Try a lower number.\n");
        else if (input > number)
            printf("Try a higher number.\n");
        attempts++;
        printf("%i attempts so far\n\n", attempts);
        
    }
    printf("Correct! You got it right in %i attempts\n"
           "The number is %i", attempts, number);
    
}