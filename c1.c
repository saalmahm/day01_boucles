#include <stdio.h>

int main() {
int n,r;
printf("entrer un nombre:");
    scanf("%d",&n);
printf("voila la table de multiplication de 1 à 10: \n");

    for (int i=1;i<=10;i++){
        r=n*i;
        printf("%d x %d = %d  \n",n,i,r);
    }
    return 0;
}
