#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a,c;
    long long  ans=0;
    for(int i=0;i<=n;i++) {
        if(i==0) {
            a=c=1;
            for(int j=1;j<=n;j++) a*=j;
        }
        else a/=(n-i+1),c*=(n-i+1),c/=i;
        ans+=(c*a)*(1-2*(i%2));
        //printf("%d %d %d\n",i,a,c);
    }
    printf("%lld",ans);
}