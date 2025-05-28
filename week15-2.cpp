///week15-2.cpp
///機車車排數字重複機率多高
#include <stdio.h>
int helper(int n){
    int a[10]=();///統計表，裡面都是0
    while (n>0){///剝皮法
        int now =n%10;
        a[now]++;
        if(a[now]>1) return 1;
        n=n/10;
    }
    return 0;
}
int main ()
{
    int ans =0;
    for (int i=0;i<=9999;i++){
        if (helper(i)==1) ans++;
    }
    printf("%d",ans);
}

