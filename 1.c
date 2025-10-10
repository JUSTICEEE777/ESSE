/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*ESSE*/
#include <stdio.h>/*←どの.hファイルを使うのかという意味だぽ*/

int main() /*main関数*/
{
    int kaeru =5656; /*蛙*/
    
    printf("Code to summon frogs is %d\n",kaeru); 
    /*；は行の終わりだお
    \nのnはニューラインって意味なんだってさ！！！*/
        /*%dの意味は、あるint整数を出力する。その時語尾に「,名前」が必要*/
    
    kaeru=kaeru-1234;
    printf("Spell to summon frogs is %d",kaeru); 
    
    return 0;
}