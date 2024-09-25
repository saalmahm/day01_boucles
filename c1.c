#include <stdio.h>

int main() {
int n,r;
printf("entrer un nombre:");
    scanf("%d",&n);
printf("voila la table de multiplication de 1 à 10: \n");

    r=0;
    for (int i=0;i<=9;i++){
        r=n*i;
        printf("%d * %d = %d  \n",n,i,r);
    }
    return 0;
}
