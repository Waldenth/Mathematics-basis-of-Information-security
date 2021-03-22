#include <stdio.h>
#include <stdlib.h>
int main(){
    while(1){
        printf("请输入a,k,p;用于求解a^{1至k }mod p的值列表.\n");
        int a, k, p, a1, k1, p1;
        scanf("%d %d %d", &a, &k, &p);
        a1 = a, k1 = k, p1 = p;
        int temp = 1;
        int *res = (int *)malloc(sizeof(int) * k);
        for (int i = 1; i <= k;i++){
            temp = temp * a;
            temp = temp % p;
            res[i - 1] = temp;
        }
        printf("%d^{1---%d}mod %d的结构列表如下:\n", a, k, p);
        for (int i = 0; i < k;i++){
            printf("\t%d{^%d} mod %d =%d\n", a, i + 1, p, res[i]);
        }
        printf("\n");
    }
    return 0;
}