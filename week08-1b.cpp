// LeetCode 3375. Minimum Operations to Make Array Values Equal to K
// �C���i�b nums �D�� valid ���� h�A�񥦤j����(���n�ۦP)�A���|�ܦ� h
// �n�� nums �̥������Ƴ��ܦ� k�A�̤֭n�X�B�H
// ���D�������G�p�G��Ʀr�u�p��j�v�Ʀn�A���X�ӡu���P�v���ơH�n�h�X�B�A�~�|�ܦ�k
int minOperations(int* nums, int numsSize, int k) {
    int table[101] = {};
    int ans = 0;
    for(int i=0; i<numsSize; i++) {
        if(nums[i]<k) return -1; // �p�G���Ƥ� k �p�A���@�w�L�k�F������
        table[nums[i]]++;
        if(table[nums[i]]==1) ans++; // �h�@�Ӽƭn��
    }
    if(table[k]>0) ans--; // �٦^�h�@�ӼơA�]�i�֨�1�B
    return ans;
}
