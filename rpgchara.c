#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>


int main()
{
    srand(time(0));
    
    unsigned int intel=(rand()%20)+1;
    unsigned int stamina=(rand()%(20-intel))+1;
    unsigned int charisma=(20-(intel+stamina));
    
    
    unsigned int max=0;
    
    if(intel>max)
        max=intel;
    if(stamina>max)
        max=stamina;
    if(charisma>max)
        max=charisma;
    
   
        
    if(max==intel){
        printf("記憶力 %d\n瞬発力 %d\n魅力%d\n",intel,stamina,charisma);
        printf("あなたは魔法使い系「mage」");
    }
    if(max==stamina){
        printf("記憶力 %d\n瞬発力 %d\n魅力%d\n",intel,stamina,charisma);
        printf("あなたはファイター系「knight」");
    }
    if(max==charisma){
        printf("記憶力 %d\n瞬発力 %d\n魅力%d\n",intel,stamina,charisma);
        printf("あなたは盗人系「thief」");
    }
    
    return 0;
    
}