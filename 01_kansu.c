#include <stdio.h> 
//関数の様々な機能が利用できるようになる関数 #include ファイルの取り込み　stdio（標準入出力の機能）.h（関数が多く入っている）
//標準入出力は最低限の基本的な入出力の機能   <stdio.h> はライブラリ、<math.h>計算関係　などもある。関数を実行する前に準備する必要がある

int main (void) {
    printf("Hello World");
    return 0;
}
//mainという名前の関数が1番初めに動作する
//int(メモリ容量の使用量,intは4バイト) main(関数の名前,1番初めはmain,次から自由) void(引数,ない) 

//実行

// gcc ファイル名.c (実行ファイルの作成)
// ./実行ファイル名  (実行ファイルの実行)

//今回の場合

// gcc 01_kansu.c
// ./a.out

// gcc -o 01_kansu 01_kansu.c && ./01_kansu でも可能