//
//  main.c
//  0718_13_linerfunc
//
//  Created by k19061kk on 2019/07/17.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int f(int x);

int main(int argc, const char * argv[]) {
    int x;
    
    for(x = 0;x <= 4;x++){
        printf("f(%d)=%d\n", x, f(x));
    }
    
    return 0;
}

int f(int x){
    return(2 * x + 1);
}
