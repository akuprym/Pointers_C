//
//  main.cpp
//  firstProjectC++
//
//  Created by admin on 24.06.24.
//

#include <stdio.h>

int main(void) {
    char d = 10;
    char *gpt = &d;
    
    printf("gpt = %p, *gpt = %d, d = %d\n", gpt, *gpt, d);
    
    *gpt = 100;
    printf("gpt = %p, *gpt = %d, d = %d\n", gpt, *gpt, d);

}
