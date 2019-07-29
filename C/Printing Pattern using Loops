#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);

    for(int row=n; row>=1; row--) {
        for (int col=n;col>row; col--)
            printf("%d ", col);
        for (int col=1; col<=(2*row-1) ; col++)
            printf("%d ",row);
        for(int col=row+1; col<=n; col++)
            printf("%d ",col);
        printf("\n");
    }
    for(int row=1; row<n; row++) {
        for (int col=n; col>row; col--)
            printf("%d ", col);
        for (int col=1; col<=(2*row-1) ; col++)
            printf("%d ",row+1);
        for(int col=row+1; col<=n; col++)
            printf("%d ",col);
        printf("\n");
    }

    return 0;
}
