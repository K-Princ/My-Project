#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float sum(float, float);
float difference(float, float);
float product(float, float);
float quotient(float , float);
float float_remainder(int , int);
int power(int , int);
float squareRoot(float);

int main()
{
    int choice;
    float x, y , res  = 0;
    do
    {
        printf("Enter your choice:\n");
        printf("1.Additon \n2.Subtraction \n3.Multiplication \n4.Divison \n5.Remainder \n6.Power \n7.SquareRoot \n8.Exit");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: 
                    printf("Enter two numbers :");
                    scanf("%f%f",&x,&y);
                    res = sum(x,y);
                    printf("sum of %f and %f is = %f",x,y,res);
                    break;

            case 2: 
                    printf("Enter two numbers:");
                    scanf("%f%f",&x,&y);
                    res = difference(x,y);
                    printf("differnce of %f and %f is = %f",x,y,res);
                    break;
            
            case 3: 
                    printf("Enter two numbers: ");
                    scanf("%f%f",&x,&y);
                    res = product(x,y);
                    printf("product of %f and %f is = %f",x,y,res);
                    break;
                
            case 4: 
                    printf("Enter dividend and divisor ");
                    scanf("%f%f",&x,&y);
                    res = quotient(x,y);
                    printf("quotient of %f and %f is = %f",x,y,res);
                    break;
            
            case 5: 
                    printf("Enter dividend and divisor:");
                    scanf("%d%d",&x,&y);
                    res = float_remainder(x,y);
                    printf("remainder when %d is divided by %d is = %f",x,y,res);
                    break;

            case 6: 
                    printf("Enter the number and power that number should be raised ");
                    scanf("%d%d",&x,&y);
                    res = power(x,y);
                    printf("%d raised %d times is = %d",x,y,res);
                    break;
                
            case 7: 
                    printf("Enter the number:");
                    scanf("%f",&x);
                    res = squareRoot(x);
                    printf("sqaure root of %f is = %f",x,res);
                    break;
            
            case 8: exit(0);

            default: printf("Enter choice between 1 to 8");
                     break;
        }
    }while (1);
    return 0;
}

float sum(float a, float b)
{
    return a+b;
}

float difference(float a, float b)
{
    if(a > b)
        return a-b;
    else
        return b-a;
}

float product(float a, float b)
{
    return a*b;
}

float quotient(float a, float b)
{
    if(b == 0)
        printf("Division by zero is not possible:");
    else
        return a/b;
}

float float_remainder(int a, int b)
{
    if( b == 0)
    {
        printf("not possible: ");
        return -1;
    }
        
    else
        return a%b;
}

int power(int a, int b)
{
    return pow(a,b);
}

float squareRoot(float a)
{
    return sqrt(a);
}