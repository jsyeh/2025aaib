// LeetCode 3375. Minimum Operations to Make Array Values Equal to K
// –Ω nums 珼 valid 计 hゑウ计(常璶)常穦跑Θ h
// 璶琵 nums 柑场计常跑Θ k程ぶ璶碭˙
// 拜肈单基Θ狦р计逼Τ碭ぃ计璶癶碭˙穦跑Θk
int minOperations(int* nums, int numsSize, int k) {
    int table[101] = {};
    int ans = 0;
    for(int i=0; i<numsSize; i++) {
        if(nums[i]<k) return -1; // 狦Τ计ゑ k ê﹚礚猭笷Θヴ叭
        table[nums[i]]++;
        if(table[nums[i]]==1) ans++; // 计璶ǐ
    }
    if(table[k]>0) ans--; // 临计ぶǐ1˙
    return ans;
}
