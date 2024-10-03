//小红拿到了一个长度为5的、仅由小写字母组成的字符串，她希望你将第二个字符移动到字符串的最前面，其余字符顺序保持不变。你能帮帮她吗？

#include <stdio.h>

int main() {
    char a, b,c,d,e;
    scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
    printf("%c%c%c%c%c",b,a,c,d,e);
    return 0;
}