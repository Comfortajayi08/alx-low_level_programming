1.#include <stdio.h> 
2.  
3./** 
4. * main - Prints the number of arguments passed to it. 
5. * @argc: The number of arguments supplied to the program. 
6. * @argv: An array of pointers to the arguments. 
7. *      
8. * Return: Always 0. 
9. */ 
10. int main(int argc, char __attribute__
   ((__unused__)) *argv[]) 
11.{ 
12.      printf("%d\n", argc - 1); 
13.
14.	return (0);
15.}
