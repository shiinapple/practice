//小红拿到了一个正整数，她每次操作可以使得这个正整数加1。小红想知道，使得该数的末尾为0至少需要操作多少次？

#include <stdint.h>

int main(){
    int a,b;
    scanf("%d",&a);
    b=a%10;
    if(b!=0)
    printf("%d",10-b);
    else
        printf("0");
    return 0;
}





 