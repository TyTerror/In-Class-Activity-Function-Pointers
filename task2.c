#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int (*operator[4]) (int a, int b);//overload

int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int quit(int a,  int b); 


int main (void){
	/* IMPLEMENT ME: Insert your algorithm here */
	int choice; //entered 1-4
  int a; //6
  int b; //3
  
  
  //addresses
	operator[0] = &add; 
  operator[1] = &subtract; 
  operator[2] = &multiply; 
  operator[3] = &divide;
  operator[4] = &quit; 

	while (choice!=4) {
		printf( "Operand ‘a’ : ");
		scanf("%d",&a);
		printf( "Operand ‘b’ : ");
		scanf("%d",&b);
    printf("\n");
		printf( "\n Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
		scanf("%d",&choice);
    printf("\n");
		printf("x = %d\n", operator[choice](a,b));
  }
  return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b){
  printf ("Adding 'a' and 'b'\n");
  return a + b; 
}
int subtract (int a, int b){
  printf("Subtracting 'a' from 'b'\n");
  return b-a; 
}
int multiply (int a, int b){
  printf("Multiplying 'a' and 'b'\n");
  return a*b; 
}
int divide (int a, int b){
  printf("Dividing 'a' by 'b'\n");
  return a/b; 
}
int quit(int a,  int b){
  return 0;
}
