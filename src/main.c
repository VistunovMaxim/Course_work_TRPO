#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "check.h"

const int InitialCount=100;

int Count, Num, Player;
int Correct;

int main (){
    
    Player=1;
    Count=InitialCount;
    
    do {
        
        if (Player==1){
            
            do{
                printf("Ваш ход. На столе %d спичек.\n", Count);
                printf("Сколько спичек Вы берете?\n");
                scanf("%d", &Num);
                
                Correct = check(Num, Count);
                
                if(Correct == 0){
                    printf("Неверно! Повторите ввод!\n");
                }
                
            }
            
            while (Correct == 0);
            
        } else {
            
            do {
                Num=rand()%10+1;
                if (Num>Count)
                    Num=Count;
                printf("На столе %d спичек.\n", Count);
                printf("Мой ход. Я взял %d спичек\n", Num);}
            while (Correct == 0);
            
        }
        
        
        Count-=Num;
        
        if (Player==1){
            Player=2;
            
        } else {
            Player=1;
        }
    }
    
    while (Count>0);
    
    if (Player == 2){
        printf("Вы победили!\n");
        
    } else {
        printf("Вы проиграли!\n");
    }
    
    return 0;
}
