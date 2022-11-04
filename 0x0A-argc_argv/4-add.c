1.#include <stdio.h> 
2. #include <stdlib.h> 
3.  
4./** 
5. * main - Prints the addition of positive numbers, 
6. *        followed by a new line. 
7. * @argc: The number of arguments passed to the program. 
8. * @argv: An array of pointers to the arguments. 
9. * 
10.* Return: If one of the numbers contains symbols that are non-digits - 1. 
11.*         Otherwise - 0. 
12.*/ 
13. int main(int argc, char *argv[]) 
14.{ 
15.		          int num, digit, sum = 0; 
16.		    
17.		           for (num = 1; num < argc; num++) 
18.			            { 
19.				           for (digit = 0; argv[num][digit]; digit++) 
20.					       { 
21.                          if (argv[num][digit] < '0' || argv[num][digit] > '9') 
22			                            {
23.									                                 printf("Error\n"); 
24.									                                  return (1); 
25.									                           } 
26.						                        } 
27.				       
28.				                      sum += atoi(argv[num]); 
29.				               } 
30.		     
31.		            printf("%d\n", sum); 
32.		      
33.		             return (0); 
34.}
