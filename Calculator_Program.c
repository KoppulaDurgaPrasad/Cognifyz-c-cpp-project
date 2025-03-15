#include <stdio.h>
int main() {
    int num1,num2; // We can also use the float data type to handle decimal numbers
    printf("Enter two numbers: \n"); // Prompt user to enter two numbers
    scanf("%d%d",&num1,&num2);
    char op;
    printf("\nEnter an operator (+, -, *, /, %%): \n"); // Prompt user to enter an operator
    scanf(" %c",&op); // Note the space before %c to skip any leftover whitespace

    if (op=='+') {
        int result=num1+num2;
        printf("The result of %d %c %d is: %d\n",num1,op,num2,result); // Display the result of addition
    } 
    else if (op=='-') {
        int result=num1-num2;
        printf("The result of %d %c %d is: %d\n",num1,op,num2,result); // Display the result of subtraction
    } 
    else if (op=='*') {
        int result=num1*num2;
        printf("The result of %d %c %d is: %d\n", num1, op, num2, result); // Display the result of multiplication
    } 
    else if (op=='/') {
        if (num2==0) {
            printf("Division by zero is not possible!\n"); // Handle division by zero case
        } else {
            int result=num1/num2;
            printf("The result of %d %c %d is: %d\n", num1, op, num2, result); // Display the result of division
        }
    } 
    else if (op=='%') {
        if (num2==0) {
            printf("Modulo by zero is not possible!\n"); // Handle modulo by zero case
        } else {
            int result=num1%num2;
            printf("The result of %d %c %d is: %d\n",num1,op,num2,result); // Display the result of modulo operation
        }
    } 
    else {
        printf("Invalid operator entered!\n"); // Handle invalid operator case
    }

    return 0; // End of the program
}
/* 
Other ways to achieve the same functionality:
1. Using a switch-case statement:
   Example:
   switch (op)
   {
       case '+': result = num1 + num2; break;
       case '-': result = num1 - num2; break;
       // Add more cases for other operators
   }
2. Using functions to pass parameters:
   Example:
   int add(int a, int b) { return a + b; }
   int result = add(num1, num2);
   // Add more functions for other operators
*/


