//
//  0620_challenge1_K19061.c
//  prg2019
//
//  Created by k19061kk on 2019/06/18.
//

/*---------------------------------------+
 プログラミング及び演習I 第10回
 チャレンジ課題1
 2から100までの間の素数を全て求め、印字する
 プログラムを作成せよ
 +---------------------------------------*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i, j;                // カウンタ変数
    int judge[101];          // 素数か判断するための配列
                             // 0:添え字が素数でない 1:添え字が素数
    
    /*---初期化---*/
    for(i = 0;i <= 100;i++){
        judge[i] = 1;        // 初期状態では全て素数
    }
    
    /*---エラトステネスの篩---*/
    for(i = 2;i <= 100;i++){
        if(judge[i] == 1){  // iは素数
            /*iの倍数は素数ではないのでjudgeの値を0に*/
            for(j = 2 * i;j <= 100;j += i){
                judge[j] = 0;
            }
        }
    }
    
    /*---出力---*/
    for(i = 2;i <= 100;i++){
        if(judge[i] == 1){
            printf("%d\n", i);
        }
    }
    
    return(0);
}