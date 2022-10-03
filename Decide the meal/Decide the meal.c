//Mini project to decide our daily meals if we dont have the idea what to eat. source:i saw this idea from a python developer on tiktok so i like to implement it in C:
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>
int DECIDE_MEAL(){
    int decision=0;
    int x,y;
char milist[100][100]={
"Banana bread","Cornbread","Cuban bread","Frybread","Texas toast","American cheese","Cheddar cheese","Colly cheese","Cream cheese","Monterey jack","Velveeta","Banana pudding","Fudge","Jello -O","Peanut butter cookie","Pecan pie","Pumpkin pie","Red velvet cake","Sundae","Calas","Charleston red rice","Chicken bog","Dirty rice","Glorified rice","Gumbo","Hawaiian hystack","Hoppin john","Jambalaya","Rice and gravy","Red beans and rice","Shrimp creole","Spabish rice","BLT","Cheesesteak","Club sandwich","Fluffernutter","Hamburger","Hot dog","Pastrami on rye","Peanut butter and jelly sandwich","Reuben sandwich","Sloppy joe","Bologna sausage","Breakfast sausage","Chaudin","Guetta","Half smoke","Hot link","Italian hot dog","Lebanon bologna","Maxwell","street polish","Polish boy","Chorizo","Buffalo wings","Roasted turkey","Chill con came","Hard shell taco","French fries",
"Waffel","Pizza"};
srand((unsigned int)(time(NULL)));
char get_dic[decision];
    decision=rand()%60;
    labelx:
    printf("\nDecide the meal\n");
    printf("\n1,Decide for me\n");
    printf("\n2,Decide for myself\n");
    printf("\nPut your choice here please: ");
   scanf("%d",&y);
  if(y==2){
    system("cls");
    for(x=0;x<=60;x++){
printf("\n%s",milist[x]);
    }
  }else if(y==1){
       system("cls"); 
  decision=rand()%60;
  printf("\n%s\n",milist[decision]);
     }else{
        system("cls");
         goto labelx;
     }
    return 0;
}
int main(){
    int decision=0;
    DECIDE_MEAL();
    return 0;
}
    
    