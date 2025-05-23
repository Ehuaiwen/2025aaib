///week10-4
///1399. Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int max_count = 0;///數一下統計最多出現幾次
        int a[100]={};///陣列宣告，放加總的總數有出現幾次
        for(int i=1;i<=n;i++){///人類FOR迴圈
            int total =0,now = i;///加起來的結果叫TOTAL
            while(now >0){
                total += now%10;
                now =now /10;
            }
            a[total]++;
            if(a[total]>max_count)max_count=a[total];
        }
        int ans = 0;
        for(int i=00;i<100;i++){
            if(a[i]==max_count)ans++;
        }
        return ans;
    }
};
