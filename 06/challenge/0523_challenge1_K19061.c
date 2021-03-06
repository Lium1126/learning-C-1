//
//  0523_challenge1_K19061.c
//  prg2019
//
//  Created by k19061kk on 2019/05/23.
//

/*---------------------------------------+
 プログラミング及び演習I 第6回
 チャレンジ課題1
 正の整数を入力すると、それが素数であるか否かを判定
 するプログラムを作成せよ。
 -for文とif文のみで作成せよ
  (配列などは使わない)
 -できるだけ今回の講義範囲内の文法を用いる
  (ex.break文を用いない)
 +---------------------------------------*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i;         // カウンタ変数
    int n;         // 素数か否かを判定する正の整数
    
    printf("n? ");
    scanf("%d", &n);
    
    if(n < 2){
        printf("%dは素数ではありません\n", n);
    }else if(n == 2){
        printf("%dは素数です\n", n);
    }else if(n % 2 == 0){    // 偶数はあらかじめ除外する
        printf("%dは素数ではありません\n", n);
    }else{
        int flag = 1; // 素数かを表すフラグ 1:素数 0:素数でない
        
        // nが約数を持つか調べるのは√nまでで十分
        for(i = 3;i * i <= n && flag == 1;i += 2){
            if(n % i == 0){ // 約数を見つけたため、素数でない
                flag = 0;
            }
        }
        
        if(flag == 1){
            printf("%dは素数です\n", n);
        }else{
            printf("%dは素数ではありません\n", n);
        }
    }
    
    return(0);
}
