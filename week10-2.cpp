///week10-2.cpp
#include <stdio.h>
int main()
{
    printf("�п�J�@�ӼƦr(ex.379):");
    int n ;
    scanf("%d",&n);
    printf("�A��J�F %d\n",n);
    ///printf("�L���Ӧ�Ʀr�O %d\n",n%10);
    ///printf("�L���Q��Ʀr�O %d\n",n/10%10);
    ///printf("�L���ʦ�Ʀr�O %d\n",n/10/10%10);
    while(n>0){
        printf("�{�b��%d���%d\n",n,n%10);
        n=n/10;
    }
}
