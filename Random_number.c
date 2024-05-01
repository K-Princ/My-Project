#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game();

int main()
{
    game();
    return 0;
}

void game()
{
    srand(time(0));
    int N = rand()%100 + 1;

    int num, tries = 0;

    do
    {
        printf("Enter the number to guess: \n");
        scanf("%d",&num);

        tries++;

        if(num > N)
            printf("Entered number is greater than the number to be guessed\n");
        else if (num < N)
            printf("Entered number is smaller than the number to be guessed\n");
        else
        {
            printf("you have guessed the number in %d tries\n",tries);
            break;
        }
        
    } while (num != N);
    
}