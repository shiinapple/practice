//小红拿到了n个物品，每个物品的品质为ai​。这n个物品中至少有一个真品。已知所有真品的品质都是相同的，但赝品的品质比真品低。小红想知道，这n个物品中最多有多少赝品。

#include <stdio.h>
 
int main(){
    int a, b=0,i,k=0;
 
    scanf("%d\n",&a);
    int s[a];
    for(i=0;i<a;i++){
        scanf("%d",&s[i]);}
    for(i=0;i<a;i++){
        if(s[i]>b)
        b=s[i];
 
    }
    for(i=0;i<a;i++){
        if(b!=s[i])
        k++;
    }
    printf("%d",k);
    return 0;
}


 

 