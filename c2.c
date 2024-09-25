// Online C compiler to run C program online
#include <stdio.h>

int main() {
int n,r,i;
printf("entrer un nombre:");
    scanf("%d",&n);
printf("voila le factoriele: \n");
r=1;
    for (i=n;i>=1;i--){
        r*=i; 

    }
    printf("la factoriele de %d est : %d",n,r);
    return 0;
}
