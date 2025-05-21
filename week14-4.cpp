///week14-4.cpp
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M = matrix.size(),N=matrix[0].size();///左M右N
        vector<int> left(M), up(N);///左邊長條，上面長條的C++陣列
        for(int i=0; i<M;i++){///左手I範圍是M
            for(int j=0; j<N;j++){///右手J範圍是N
                if(matrix[i][j]==0){///遇到有0就在左邊長條，上面打勾勾
                    left[i] = 7;///打勾勾
                    up[j] = 7;///打勾勾
                }

            }

        }
        for(int i= 0;i<M;i++){///左手I範圍是M
            for(int j=0;j<N;j++){///右手J範圍是N
                if(left[i]==7 || up[j]==7)matrix[i][j]=0;
            }///遇到左邊有勾勾OR上面有勾勾就把他設成0
        }
    }
};
