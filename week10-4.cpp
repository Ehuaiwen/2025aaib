///week10-4
///1399. Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int max_count = 0;///计参璸程瞷碭Ω
        int a[100]={};///皚羆羆计Τ瞷碭Ω
        for(int i=1;i<=n;i++){///摸FOR癹伴
            int total =0,now = i;///癬ㄓ挡狦TOTAL
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
