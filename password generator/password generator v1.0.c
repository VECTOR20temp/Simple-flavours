//Program for Implementing random password generating:
//preprocessing process: 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
//end of preprocessing:
//password() function body... the main function that operates the program:
int password(int lngth){
    //i used for loop expression pss_rndmzr the actual string that will be generated:
    int i=0;
    int pss_rndmzr=0;
    //place to randomize password every execution time using time.h in time():
    srand((unsigned int)(time(NULL)));
    //Array string initialization to use them as password genereting elements from upper case,lower case,number,symbol:
char num[]="0123456789";
char lwr[]="abcdefghijklmnopqrstuvwxyz";
char upr[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char smbl[]="@#$%&<>=^";
//Passing func arg in new array:
char PASS[lngth];
//initializing pss_rndmzr with rand func and modulus it with N:
pss_rndmzr=rand()%4;
printf("\nDecide the length of password to generate from 6 to 20: ");
 scanf("%d",&lngth);
 //loop body to decide how the password will be generated:
for(i=0;i<lngth;i++){
if(pss_rndmzr==1){
PASS[i]=num[rand()%10];
pss_rndmzr=rand()%4;
printf("%c",PASS[i]);
    }else if(pss_rndmzr==2){
PASS[i]=smbl[rand()%9];
pss_rndmzr=rand()%4;
printf("%c",PASS[i]);
    }else if(pss_rndmzr==3){
PASS[i]=upr[rand()%26];
pss_rndmzr=rand()%4;
printf("%c",PASS[i]);
    }else{
PASS[i]=lwr[rand()%26];
pss_rndmzr=rand()%4;
printf("%c",PASS[i]);
            }
      }
}
//Main function body to call actual function used:
int main(){
    //Length of password to be generated:
    int lngth=20;
    //func call of password():
    password(lngth);
    return 0;
}
