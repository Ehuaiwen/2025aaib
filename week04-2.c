//week04-2.c ���Ѫ�LEETCODE�D���D
//LEETCODE 2529.Maximon COunt Positive
int maximumCount(int* nums, int numsSize) {

    int pos =0,neg = 0;//�j��e���A���O0

    for (int i=0; i<numsSize; i++){
        if (nums[i]>0)pos++;//����
        if (nums[i]<0)neg++;//�t��
    }//�j�餤���A��s �ק�

//�j��᭱�A�⥦���ӥ�
    if (pos>neg)return pos;//���Ƥ�
    else return neg;//���M�A�N�t��
}
