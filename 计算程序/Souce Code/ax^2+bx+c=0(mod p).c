#include <stdio.h>
#include <stdlib.h>
int main(){
    while (1)
    {
        printf("请输入a,b,c,p ; 用于求解ax{^2}+bx+c=0 (mod p)\n");
        int a, b, c, p, a1, b1, c1, p1;
        int *res = NULL;
        scanf("%d %d %d %d", &a, &b, &c, &p);
        a1 = a, b1 = b, c1 = c, p1 = p;
        int temp;
        int num = 0;
        for (int i = 0; i < p; i++){
            temp = (a * i * i + b * i + c) % p;
            if(temp==0){
                res = (int *)realloc(res, sizeof(int) * (num + 1));
                res[num] = i;
                num++;
            }
        }
        printf("方程%dx{^2}+%dx+%d=0 (mod %d)的解个数为%d:\n", a1, b1, c1, p1,num);
        for (int i = 0; i < num;i++){
            printf("\t x=%d(mod %d)\n", res[i], p1);
        }
        printf("\n");
    }
    return 0;
}