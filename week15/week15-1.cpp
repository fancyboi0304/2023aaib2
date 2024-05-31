///week15-1.c LeetCode 3158 要找出現2次
int duplicateNumbersXOR(int* nums, int numsSize) {
    int table[51] = {};
    for(int i=0;i<numsSize;i++) {
        table[nums[i]]++;  ///這個數字出現,+1
    }
    int ans = 0;
    for(int i=1;i<=50;i++) { ///針對table裡1...50
        if(table[i]==2) ans = ans ^ i;
    }
    return ans;
}
