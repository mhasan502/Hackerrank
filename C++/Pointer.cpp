#include <stdio.h>
#include <cstdlib> 

void update(int *a,int *b) {
    int aa = *a;
    int bb = *b;
    *a = abs((aa+bb));
    *b = abs((aa-bb));    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
