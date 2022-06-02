#include <stdio.h>
#include <conio.h>

/**
 *  * main - Entry Point
 *   *
 *    * Return: Always 0 (Success)
 *     */

int main(void)
{

clrscr();
printf("short int is %2d bytes \n", sizeof(short int));
printf("int is %2d bytes \n", sizeof(int));
printf(" int * is %2d bytes \n", sizeof(int *));
printf(" long int is %2d bytes \n", sizeof(long int));
printf("   long int * is %2d bytes \n", sizeof(long int *));
printf("   signed int is %2d bytes \n", sizeof(signed int));
printf("\n");
printf("        float is %2d bytes \n", sizeof(float));
printf("      float * is %2d bytes \n", sizeof(float *));
printf("       double is %2d bytes \n", sizeof(double));
printf("     double * is %2d bytes \n", sizeof(double *));
printf("  long double is %2d bytes \n", sizeof(long double));
printf("\n");
printf("  signed char is %2d bytes \n", sizeof(signed char));
printf("         char is %2d bytes \n", sizeof(char));
printf("       char * is %2d bytes \n", sizeof(char *));


return (0);
}