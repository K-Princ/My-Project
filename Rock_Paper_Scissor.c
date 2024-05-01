#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game();
void gameloop(int,int);
int main()
{
    game();
    return 0;
}
void game()
{
    int number,choice;
    srand(time(0));
    number = rand();
    number = number % 3;
    printf("1)Rock\n2) paper\n3) scissor");
    do
    {
        scanf("%d",&choice);
        if(choice > 3 || choice < 1)
        {
            printf("\nenter valid choice");
        }
    }while(choice > 3 || choice < 1);
    gameloop(choice,number);
}
void gameloop( int choice,int compchoice)
{
    if(choice==1)
    {
        if (compchoice==2)
            printf("you win");
        if (compchoice==1)
            printf("you lose");
        if (compchoice==0)
            printf("draw");
    }
    if(choice==2)
    {
        if(compchoice==2)
            printf("you win");
        if(compchoice==1)
            printf("you lose");
        if(compchoice==0)
            printf("draw");
    }
    if(choice==3)
    {
        if(compchoice==2)
            printf("you win");
        if(compchoice==1)
            printf("you lose");
        if(compchoice==0)
            printf("draw");
    }
}
    

