#include <stdio.h>
int main(){
 char Operator;
 float num1, num2, result = 0;
 printf("Enter any one operator like +, -, *, / : ");
 scanf("%c", &Operator);
 printf("Enter the values of Operand num1: ");
 scanf("%f", &num1);
 printf("Enter the values of Operand num2: ");
 scanf("%f", &num2);
 switch(Operator){
    case '+': result = num1 + num2;
    break;
    case '-': result = num1 - num2;
    break;
    case '*': result = num1 * num2;
    break;
    case '/': result = num1 / num2;
    break;
 }
 printf("The value = %f", result);
 return 0;
}
