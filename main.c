#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1 = 2;
    double num2 = 4;
    char operator = '*';
    double ans;
    switch(operator)
    {
    case '+':
        ans = num1 + num2;
        printf("%f\n",ans);
        break;
    case '-':
        ans = num1 - num2;
        printf("%f\n",ans);
        break;
    case '/':
        ans = num1 / num2;
        printf("%f\n",ans);
        break;
    case '*':
        ans = num1 * num2;
        printf("%f\n",ans);
        break;
    }
    //printf("Hello world!\n");
    return 0;
}
