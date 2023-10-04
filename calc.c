#include <stdio.h>
 
int main()
{
	char Operator;
	float a,b, result = 0;
	
	printf("\n Please Enter an Operator (+, -, *, /)  :  ");
  	scanf("%c", &Operator);
  	
	printf("\n Please Enter the Values For first Operand  :  ");
  	scanf("%f",&a);
  	
  	printf("\n Please Enter the Values For second Operand  :  ");
  	scanf("%f",&b);
  	
  	switch(Operator)
  	{
  		case '+':
  			result = a + b;
  			break;
  		case '-':
  			result = a - b;
  			break;  			
  		case '*':
  			result = a * b;
  			break;
  		case '/':
  			result = a / b;
  			break;
		default:
			printf("\n You have enetered an Invalid Operator ");				    			
	}
  
	printf("\n The result of %.1f %c %.1f  = %.1f", a, Operator, b, result);
	
  	return 0;
}
