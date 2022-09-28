//Random number generator mini project:
//preprocessing:
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
//main utility function body with argument passed of the length of number to generate:
int numgen(int numlngth){
   //variable declaration:
   int i=0;
   int numrndmzr=0;
   //string array declaration for inclusion of numbers 0 to 9:
   char numrs[]="0123456789";
   //telling our program to generate random numbers every execution time:
srand((int)(time(NULL)));
char NUM[numlngth];
//initializing number randemizer variable with rand() and modulus it with numgen arg:
numrndmzr=rand()%1;
printf("\nDecide the length of numbera to generate: ");
 scanf("%d",&numlngth);
    //loop body for generating random number as requiered:
    for(i=0;i<numlngth;i++){
      numrndmzr=rand()%1; 
        printf("\n%d\n",NUM[i]);
    }
        
    return 0;
}
int main(int argc, char *argv[])
{
	int numlngth=0;
	numgen(numlngth);
	return 0;
}