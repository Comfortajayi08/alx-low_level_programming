1.#include <stdio.h> 
2. #include <stdlib.h> 
3. /** 
4.  *   * main - prints the minimum number of coins to make change for an amount. 
5.  *    * of money. 
6.  *     * @argc: number of command line arguments. 
7.  *      * @argv: array that contains the program command line arguments. 
8.  *       * Return: 0 - success. 
9.  *        */ 
11. int main(int argc, char *argv[]) 
12.{ 
13.		          int cents, ncoins = 0; 
14.		    
15.		           if (argc == 1 || argc > 2) 
16.			            { 
17.				                     printf("Error\n"); 
18.				                      return (1); 
19.				               } 
20.		     
21.		            cents = atoi(argv[1]); 
22.		      
23.		             while (cents > 0) 
24.			              { 
25.				               if (cents >= 25) 
26.					            cents -= 25; 
27.				                else if (cents >= 10) 
28.						         cents -= 10; 
29.					         else if (cents >= 5) 
30.						          cents -= 5; 
31.					         else if (cents >= 2) 
32.						          cents -= 2; 
33.					           else if (cents >= 1) 
34.						           cents -= 1; 
35.					                    ncoins += 1; 
36.					 } 
37.		              printf("%d\n", ncoins); 
38.		               return (0); 
39.}
