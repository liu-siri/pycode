#include<stdio.h>
int main(){
    int n, r = 1, w = 1;//r??1,11,111?????,w????
    scanf("%d", &n);
    while(r < n){
        r *= 10;
        r++;
        w++;
    }
    while(1){
        printf("%d", r/n);//???
        r %= n;//??
        if(r ==0 )//???,???0,???????,break?
            break;
        r = r * 10 + 1;//???0?????????1
        w++;
    }
    printf(" %d",w);
    return 0;
}
