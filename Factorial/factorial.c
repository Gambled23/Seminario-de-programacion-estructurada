#include <stdio.h>
#include <stdlib.h>

//Factorial
int main()
{
    int num, res, resO;
    printf("De que numero quieres sacar factorial?\n");
    scanf("%d", &res);
    num = res - 1;
    resO = res;
    printf("%d!= %d", resO, res);
    do
    {
        res = res * num;
        printf(" x %d", num);
        num--;
    } while (num > 0);
    printf(" = %d \n", res);
    system("PAUSE");
    return 0;
}