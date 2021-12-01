#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int (*Op[4]) (int a, int b) = {add, subtract, multiply, divide};

int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
	int operation = 0;
	int a = 6;
	int b = 3;
	
	printf("\n a = 6, b = 3.\n");
	// Make sure we get the correct input.
	while(operation >= 0 && operation <= 3){
		printf("Enter 0(add), 1(subtract), 2(multiply), 3(divide), or 4(exit)\n");
		
		// Get the input, make sure the input is valid.
		if(scanf("%d",&operation) != 1){
			operation = 4;
			printf("Invalid input, please enter a proper integer. Exiting program.\n");
			return 0;
		}
		
		// Exit, don't try to do an operation.
		if(operation >= 4){
			printf("Exiting program.\n");
			return 0;
		}
		(*Op[operation]) (a, b);
	}
	
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { 
	printf ("'a' + 'b' = %d\n", a + b); 
	return a + b; 
}

int subtract(int a, int b){
	printf ("'a' - 'b' = %d\n", a - b); 
	return a - b;
}

int multiply(int a, int b){
	printf ("'a' * 'b' = %d\n", a * b); 
	return a * b;
}

int divide(int a, int b){
	printf ("'a' / 'b' = %d\n", a / b); 
	return a / b;
}