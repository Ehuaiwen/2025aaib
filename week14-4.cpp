///week14-4.cpp
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M = matrix.size(),N=matrix[0].size();///��M�kN
        vector<int> left(M), up(N);///��������A�W��������C++�}�C
        for(int i=0; i<M;i++){///����I�d��OM
            for(int j=0; j<N;j++){///�k��J�d��ON
                if(matrix[i][j]==0){///�J�즳0�N�b��������A�W�����Ĥ�
                    left[i] = 7;///���Ĥ�
                    up[j] = 7;///���Ĥ�
                }

            }

        }
        for(int i= 0;i<M;i++){///����I�d��OM
            for(int j=0;j<N;j++){///�k��J�d��ON
                if(left[i]==7 || up[j]==7)matrix[i][j]=0;
            }///�J�쥪�䦳�Ĥ�OR�W�����ĤĴN��L�]��0
        }
    }
};
