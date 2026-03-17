#include <stdio.h>

int main (void){
    printf("%d" , 100);
    printf("回");

    printf("%d回\n", 100);

    printf("%d+", 1);
    printf("%d=", 2);
    printf("%d", 3);

    printf(" ");

    printf("%d+%d=%d\n", 1,2,3);
    return 0;
}

// "%d"を使うと、文字列ではなく数値を出力することができる。%dに数値を代入している