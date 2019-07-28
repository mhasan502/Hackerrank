#include <stdio.h>

int main() {
    char array[1000];
    gets(array);
    int count[10]={};

    for (int i = 0; array[i] !='\0' ; ++i) {
        if(array[i]>='0' && array[i]<='9')
            count[array[i]-'0']++;
    }
    for (int i = 0; i < 10; ++i) {
        printf("%d ",count[i]);
    }
    return 0;
}
