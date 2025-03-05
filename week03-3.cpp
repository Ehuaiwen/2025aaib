/// week03-3.cpp
#include<stdio.h>
int main()
{///從0開始，不要超過< 5就跑5次
    for(int i=0 ; i<5 ; i++){
        printf("%d",i);
    }///電腦的FOR迴圈電腦從0開始

    printf("\n");///跳行

    ///人類比較麻煩，從1開始數
    ///間寫「多少」，就跑「多少」次
    for(int i=1;i<=5;i++){
        printf ("%d",i);
    }///人類的FOR迴圈從1開始
}
