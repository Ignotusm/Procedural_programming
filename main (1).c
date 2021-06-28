#include <stdio.h>

int main() {
    int i,j,k,l,m,n,o,v,p,r,s;
    char c='A',c1='A',c2='A';

    scanf("%d",&p);

for(o=1;o<=p;o++) {

    scanf("%d %d %d", &v, &s, &r);


    for (m = 1; m <= v; m++) {

        c1 = c2;
        for (i = 1; i <= r; i++) {

            for (n = 1; n <= s; n++) {

                c = c1;

                for (j = r - 1; j >= i; j--) {
                    printf("*");
                }
                for (k = 1; k <= i * 2 - 1; k++) {
                    printf("%c", c);
                    if(c=='Z'){
                        c='A'-1;
                    }
                    c++;
                }
                for (l = r - 1; l >= i; l--) {
                    printf("*");
                }

            }
            c1++;

            printf("\n");

        }

    }
}
    return 0;
}