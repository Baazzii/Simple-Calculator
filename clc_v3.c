#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Functions created
char selectedcharacter(char);
float calcB(float, char, float);
float calcU(float, char);
void caseE();

int main()
{
    //Welcome message
    puts("Welcome to my Command Line Calculator");
    puts("Developer: Muhammad Bazzi");
    puts("Version: 3");
    puts("Date: Nov 30, 2022");
    printf("--------------------------------------------------\n")  ; \

    //Initialization of all variables used
    float a=0, b=0, c=0, d=0, e=0;
    float num1, num2, res;
    char choice = 'B', choice2, op, var;
    
    //Start while loop
    while (choice != 'E'){
        //Call function for users choice
        choice = selectedcharacter(choice);
        //Switch case for choices
        switch(choice){
            //Create a case B for when user inputs Binary operations
            case 'B':
                //Get first number and check for valid inputs
                printf("Please enter the first number\n");
                if (scanf(" %f", &num1) == 1){
                    printf("Please enter an operator (+, -, *, /, %%, P, X, I)\n");
                    if(scanf(" %c", &op) == 1){
                        //create awhile loop for when user makes a wrong input for an operator
                        while(op != '+' && op != '-' && op != '*' && op != '/' && op != '%' && op != 'P' && op != 'X' && op != 'I') {
                            printf("Operator not valid, please select a valid operation from the list\n");
                            scanf(" %c", &op);
                        }
                        printf("Please enter the second number\n");
                        if(scanf(" %f", &num2) == 1){
                            //call function for binary operations
                            calcB(num1, op, num2);
                        }
                        else{
                            printf("Invalid Number");
                        }
                    }
                    else{
                        printf("Invalid Character");
                    }
                }
                else{
                    printf("Invalid Number");
                }
                break;

                //Create case for unary operations
            case 'U':
                printf("Please enter a number\n");
                if (scanf(" %f", &num1) == 1){
                    printf("Please enter an operator (S, L, E, C, F)\n");
                    if(scanf(" %c", &op) == 1){
                        //create while loop for when user enters a wrong input
                        while (op != 'S' && op != 'L' && op != 'E' && op != 'C' && op != 'F') {
                            printf("Please enter a valid operator (S, L, E, C, F)\n");
                            scanf(" %c", &op);
                        }
                        //Call funtion for unary operations
                        calcU(num1, op);
                    }
                    else{
                        printf("Invalid Character");
                    }
                }
                else{
                    printf("Invalid Number");
                }
                break;
                //Math with variables and or number
            case 'A':
                printf("Please enter a Letter (B, U, E)\n");
                if(scanf(" %c", &choice2)){
                    //create awhile loop for when user makes a wrong input for an operation
                    while (  choice2!= 'B' && choice2!= 'U' && choice2!= 'E') {
                        printf("Please enter a valid choice: (B, U, E)\n");
                        scanf(" %c", &choice2);
                    }
                    switch(choice2) {
                        case 'B':
                            //Assigning variables
                            printf("Please enter a variable or n for number\n");
                            if (scanf(" %c", &var) == 1) {
                                switch (var) {
                                    case 'a':
                                        num1 = a;
                                        break;
                                    case 'b':
                                        num1 = b;
                                        break;
                                    case 'c':
                                        num1 = c;
                                        break;
                                    case 'd':
                                        num1 = d;
                                        break;
                                    case 'e':
                                        num1 = e;
                                        break;
                                    case 'n':
                                        printf("Enter Number\n");
                                        scanf(" %f", &num1);
                                        break;
                                }
                                printf("Please enter an operator (+, -, *, /, %%, P, X, I)\n");
                                if (scanf(" %c", &op) == 1) {
                                    printf("Please enter a variable or n for number\n");
                                    if (scanf(" %c", &var) == 1) {
                                        switch (var) {
                                            case 'a':
                                                num2 = a;
                                                break;
                                            case 'b':
                                                num2 = b;
                                                break;
                                            case 'c':
                                                num2 = c;
                                                break;
                                            case 'd':
                                                num2 = d;
                                                break;
                                            case 'e':
                                                num2 = e;
                                                break;
                                            case 'n':
                                                printf("Enter Number\n");
                                                scanf(" %f", &num2);
                                                break;
                                        }
                                        calcB(num1, op, num2);
                                    } else {
                                        printf("Invalid Number");
                                    }
                                } else {
                                    printf("Invalid Character");
                                }
                            } else {
                                printf("Invalid Number");
                            }
                            break;
                        case 'U':
                            printf("Please enter a variable\n");
                            if (scanf(" %c", &var) == 1){
                                while (op != 'S' && op != 'L' && op != 'E' && op != 'C' && op != 'F') {
                                    printf("Please enter a valid operator (S, L, E, C, F)\n");
                                }
                                switch(var){
                                    case 'a':
                                        num1 = a;
                                        break;
                                    case 'b':
                                        num1 = b;
                                        break;
                                    case 'c':
                                        num1 = c;
                                        break;
                                    case 'd':
                                        num1 = d;
                                        break;
                                    case 'e':
                                        num1 = e;
                                        break;
                                    case 'n':
                                        printf("Enter Number\n");
                                        scanf(" %f", &num1);
                                        break;
                                }
                                printf("Please enter an operator (S, L, E, C, F)\n");
                                if(scanf(" %c", &op) == 1){
				    //call function	
                                    calcU(num1, op);
                                }
                                else{
                                    printf("Invalid Character");
                                }
                            }
                            else{
                                printf("Invalid Number");
                            }
                            break;
                        case 'E':
                            break;
                            //Default when user enter wrong input operators
                        default:
                            puts("Error, invalid Letter");
                    }
                }
                else{
                    printf("Invalid Character");
                }
                break;
                //Chose variables
            case 'V':
                printf("Please enter a variable (a, b, c, d, e)\n");
                if(scanf(" %c", &var)){
                    while (var != 'a' && var != 'b' && var != 'c' && var != 'd' && var != 'e') {
                        printf("Please enter a valid variable:\n");
                    }
                    printf("Please enter a number\n");
                    if (scanf(" %f", &num1) == 1){
                        switch(var){
                            //Setting variable a
                            case 'a':
                                a = num1;
                                printf("Variable a is now %f\n\n", a);
                                break;
                                //Setting variable b
                            case 'b':
                                b = num1;
                                printf("Variable a is now %f\n\n", b);
                                break;
                                //Setting variable c
                            case 'c':
                                c = num1;
                                printf("Variable a is now %f\n\n", c);
                                break;
                                //Setting variable d
                            case 'd':
                                d = num1;
                                printf("Variable a is now %f\n\n", d);
                                break;
                                //Setting variable e
                            case 'e':
                                e = num1;
                                printf("Variable a is now %f\n\n", e);
                                break;
                        }
                    }
                    else{
                        printf("Invalid Number");
                    }
                }
                else{
                    printf("Invalid Character");
                }
                break;
            case 'E':
                caseE();
                break;
                //If letter is not in Index
            case 'X':
                puts("Error, invalid letter");
        }
    }
    //Create a goodbye message
    printf("Thanks for using my simple calculator. Hope to see you again.\nGoodbye\n");
    return 0;
}
//All functions
char selectedcharacter(char a){
    
    //Startup Questions to ask user and for their input
    printf("\nSelect one of the following items:\n");
    printf("B) Binary Mathematical Operations, such as addition and substraction\n");
    printf("U) Unary Mathematical Operations, such as root and log\n");
    printf("A) Advances Mathematical Operations, using variables, arrays\n");
    printf("V) Define variable and assign them values\n");
    printf("E) Exit\n");
    scanf(" %c", &a);
    switch (a){
        case 'B':
            a = 'B';
            break;
        case 'U':
            a = 'U';
            break;
        case 'A':
            a = 'A';
            break;
        case 'V':
            a = 'V';
            break;
        case 'E':
            a = 'E';
            break;
        default:
            a = 'X';
    }
    return a;
}

float calcB(float num1, char op, float num2){
    float res;
    //Start Switch case for operations
    switch(op){
        //Calculate for addition
        case '+':
            res = num1 + num2;
            printf("The Result is %f\n\n", res);
            break;
            //Calculate for substraction
        case '-':
            res = num1 - num2;
            printf("The Result is %f\n\n", res);
            break;
            //Calculate for multiplication
        case '*':
            res = num1 * num2;
            printf("The Result is %f\n\n", res);
            break;
            //Calculate for divison
        case '/':
            // Checks for float input and non-zero value
            if(num2==0.00){
                printf("The denominator cannot be 0!\n");
            }
            else{
                res = num1 / num2;
                printf("The result ies %f\n\n", res);
            }
            break;
            //Calculate for remainder
        case '%':
            res = (int)num1 % (int)num2;
            printf("The Result is %f\n\n", res);
            break;
            //Calculate for power
        case 'P':
            res = pow((double)num1, (double)num2);
            printf("The Result is %f\n\n", res);
            break;
            //Calculate for Max
        case 'X':
            if (num1 > num2){
                res = num1;
            }
            else{
                res = num2;
            }
            printf("The Maximum number is %f\n\n", res);
            break;
            //Calculate for Min
        case 'I':
            if (num1 < num2){
                res = num1;
            }
            else{
                res = num2;
            }
            printf("The minimum number is %f\n\n", res);
            break;
            //Default when wrong operators are used
        default:
            puts("Error, invalid operator");
    }
}

float calcU(float num1, char op){
    float res;
    switch(op){
        //Calculate for Square root
        case 'S':
            res = sqrt(num1);
            printf("The Result is %f\n\n", res);
            break;
            //Calculate for Logarithm base 10
        case 'L':
            res = log10(num1);
            printf("The Result is %f\n\n", res);
            break;
            //Calculate for exponentiation
        case 'E':
            res = exp(num1);
            printf("The Result is %f\n\n", res);
            break;
            //Calculate for Ceiling of number
        case 'C':
            res = ceil(num1);
            printf("The Result is %f\n\n", res);
            break;
            //Calculate for Floor of number
        case 'F':
            res = floor(num1);
            printf("The Result is %f\n\n", res);
            break;

    }
}
void caseE(){
}
