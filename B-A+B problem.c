//对于给定的正整数  z ，你需要寻找两个不同的正整数 x 和  y ，使得  x+y=z 成立。 如果不存在这样的 x 和 y ，你只需要输出  NO 。

#include <stdint.h>

int main(){
    int a=0;
    scanf("%d",&a);
    if(a==2)
        printf("NO");
    else if(a==1)
        printf("NO");
    else{
        printf("YES\n");
        printf("1 %d",a-1);
    }
    return 0;
}





 

 