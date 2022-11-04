1.#include <stdio.h> 
2.
3./**
4. * main - Prints all arguments it receives. 
5. * @argc: The number of arguments supplied to the program. 
6. * @argv: An array of pointers to the arguments. 
7. * 
8. * Return: Always 0.
9.*/ 
10. int main(int argc, char *argv[]) 
11. {
12.		          int arg; 
13.		    
14.		           for (arg = 0; arg < argc; arg++) 
15.			                    printf("%s\n", argv[arg]); 
16.		     
17.		            return (0);
18.}
