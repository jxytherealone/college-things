#include<stdio.h>
int main() {
    int n,i,m=0, flag=0;
    printf("enter then number: ");
    scanf("%d", &n);
    m = n/2;
    for(i=2; i<=n; i++) {
        if(n%i == 0) {
            printf("%d is not a prime number.", n);
            flag = 1;
            break;
        } 
    }
    if(flag == 0) {
        printf("%d is a prime number.", n);
        return 0;
    }
    
}