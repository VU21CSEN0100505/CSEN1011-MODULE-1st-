/* Algorithm
01. Start
02. accept number1,number2, operator
03. display result after running the values with operator
04. Stop */


#include <stdio.h>

int main()
{
    char op;
    int num1, num2, result;

    scanf("%d %d %c", &num1,&num2,&op);


    switch(op)
    {
        case '+': 
            result = num1 + num2;
            printf("%d",result);
            break;

        case '-': 
            result = num1 - num2;
            printf("%d",result);
            break;

        case '*': 
            result = num1 * num2;
            printf("%d",result);
            break;

        case '/': 
            result = num1 / num2;
            printf("%d",result);
            break;
        
         case '%': 
            result = num1 % num2;
            printf("%d",result);
            break;
        default: 
            printf("Invalid operator");
    }

    return 0;
}


/* Output:
Run - 1
8
4
4
2


Run - 2
9
3
3
27              */

