#include <stdio.h>

int main() {
int n,s,i;
do{
	printf("entrer un nombre:");
    scanf("%d",&n);
}while(n<0);

s=0;
    for (i=0;i<=n;i++){
        s+=i;

    }
    printf("la somme est %d: ",s);
    return 0;
}
