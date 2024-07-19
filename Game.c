#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int choice(char you,char comp);
int main(){
    char you,comp;
    srand(time(0));
    int number=rand()%10+1;
    if(number>1 && number<33){
        comp='s';
    }
    else if(number>33 && number<66){
        comp='w';
    }else{
        comp='g';
    }
    printf("Enter s for snake,w for water or g for gun\n");
    scanf("%c",&you);
    int result=choice(you,comp);
    if(result==1){
        printf("You chose %c and comp chose %c and you won\n",you,comp);
    }
    else if(result==-1){
        printf("You chose %c and comp chose %c and comp won\n",you,comp);
    }
    else{
        printf("You chose %c and comp chose %c and it is draw\n",you,comp);
    }
    return 0;

}
int choice(char you,char comp){
    if(you==comp){
        return 0;
    }
    if(you=='s' && comp=='g'){
        return -1;
    }
    else if(you=='g' && comp=='s'){
        return 1;
    }
    if(you=='w' && comp=='g'){
        return 1;

    }
    else if(you=='g' && comp=='w'){
        return -1;
    }
    if(you=='w' && comp=='s'){
        return -1;
    }
    else if(you=='s' && comp=='w'){
        return 1;
    }
}