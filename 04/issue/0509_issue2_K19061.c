//
//  0509_issue2_K19061.c
//  prg2019
//
//  Created by k19061kk on 2019/05/09.
//

/*--------------------------------------------+
 プログラミング及び演習I 第4回
 課題2
 1つの変数xを入力し、偶数(ないし奇数)かどうかを判断する
 プログラムを書け。
 +--------------------------------------------*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int x;            // 偶奇判定をする整数
    
    printf("x? ");
    scanf("%d", &x);  // xを入力
    
    if(x % 2 == 0){
        printf("偶数です\n");
    }else{
        printf("奇数です\n");
    }
    
    return(0);
}
