#include <iostream>
#include <ctime>
#include <cstdlib>

const int InitialCount=100;

int Count, Num, Player;
bool Correct;
int main (){
    
    Player=1;
    Count=InitialCount;
    
    do {
        
        if (Player==1){
            
            do{
                std::cout<<"Ваш ход. На столе "<<Count<<" спичек.\n";
                std::cout<<"Сколько спичек Вы берете?\n";
                std::cin>>Num;
                if(Num>=1&&Num<=10&&Num<=Count){
                    
                    Correct=true;
                    
                } else{
                    
                    std::cout<<"Неверно! Повторите ввод!\n";
                    Correct=false;
                    
                }
            }
            
            while (!Correct);
            
        }else {
            
        }
        
        
        Count-=Num;
    while (Count>0);
    
    return 0;
}
