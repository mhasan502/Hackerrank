#include <stdio.h>

int max_of_four(int var[]) {
    int max = var[0];
    for (int i = 0; i < 4; ++i) {
        if(var[i]>max)
            max = var[i];
    }
    return max;
}
int main() {
    int var[4];
    for (int i = 0; i < 4; ++i) {
        scanf("%d",&var[i]);
    }
    int ans = max_of_four(var);
    printf("%d", ans);

    return 0;
}
