#include <stdio.h>
#include <stdlib.h>

int main () {

    double num1;
    double num2;
    char op;

    printf ("Enter a Number: ");
    scanf ("%if", &num1);
    printf ("Enter operator: ");
    scanf (" %c", &op);

    printf ("Enter a Number: ");
    scanf ("%if", &num2);

    if (op == '+'){
        printf ("&f", num1 + num2);
    } else if (op == '-') {
        printf ("&f", num1 - num2);
    }
    } else if (op == '/') {
        printf ("&f", num1 / num2);
    }
     } else if (op == '*') {
        printf ("&f", num1 * num2);
    } else {
    printf ("Error! Invalid operator");
    }
    

    return ;
}
