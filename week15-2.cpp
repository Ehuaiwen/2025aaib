///week15-2.cpp
///�������ƼƦr���ƾ��v�h��
#include <stdio.h>
int helper(int n){
    int a[10]=();///�έp��A�̭����O0
    while (n>0){///��֪k
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

