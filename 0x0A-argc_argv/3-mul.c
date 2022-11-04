1.#include <stdio.h> 
2. #include <stdlib.h> 
3.  
4./** 
5. * main - Prints the multiplication of two numbers, followed by a new line. 
6. * @argc: The number of arguments supplied to the program. 
7. * @argv: An array of pointers to the arguments. 
8. * 
9. * Return: If the program receives two arguments - 0. 
10.*         If the program does not receive two arguments - 1. 
11.*/ 
12. int main(int argc, char *argv[]) 
13.{ 
14.                       int num1, num2, prod; 
15.		    
16.		           if (argc != 3) 
17.        {      
18.                               printf("Error\n"); 
19.				   return (1); 
20.	    } 
21.		     
22.		             num1 = atoi(argv[1]); 
23.		             num2 = atoi(argv[2]); 
24.		             prod = num1 * num2; 
25.		        
26.		              printf("%d\n", prod); 
27.		         
28.		              return (0); 
29.}
