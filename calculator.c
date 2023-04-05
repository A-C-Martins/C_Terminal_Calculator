#include<stdio.h>
#include<string.h>


int main(int argc, char const *argv[])
{
    int x, y;
    char i = '+', p = '-', s = '*', f = '/';
    char k;
    printf("Am a calculator, Read the rules below to, to know it works\n+ is for Addition\n- is for Subtraction\n* is for Multiplication\n/ is for Divition.");
    
    printf("\nplease enter the operator you want to use +, -, *, /\n");
     scanf("%c", &k);

     printf("Enter the numbers you want to calculate\n");
    scanf("%d", &x);

    scanf("%d", &y);

    if (k == i)
        printf("The answer is : %d", x + y);
        
         else if (k == p)
        printf("The answer is : %d", x - y);

        /* code */
        else if (k == s)
        printf("The answer is : %d", x * y);

         else if (k == f)
        /* code */
        printf("The answer is : %d", x / y);
        else
        printf("You Entered the Wrong Oprator");
    
}
