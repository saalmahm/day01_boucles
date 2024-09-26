#include <stdio.h>

int main() {
int n,r,i;
do{
	printf("entrer un nombre:");
    scanf("%d",&n);
}while(n<0);

r=1;
    for (i=n;i>=1;i--){
        r*=i; 

    }
    printf("la factoriele de %d est : %d",n,r);
    return 0;
}
