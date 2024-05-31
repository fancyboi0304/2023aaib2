///week15-5.c
///LeetCode 1208,Get Equal Substrings within Budget�g��@�b
int equalSubstring(char* s, char* t, int maxCost) {
    int ans = 0, j = 0;
    int N = strlen(s); ///�����D�r�ꪺ����
    for(int i=0;i<N;i++){ ///�r�ꪺ�j��
        maxCost -= abs(s[i] - t[i]);
        while(maxCost<0) {
            maxCost += abs(s[j] - t[j]);
            j += 1;
        }
        if(i-j+1>ans) ans = i-j+1;
    }
    return ans;
}
