#include <stdio.h>  
#include "max.h"    // 引用自定义的头文件
int main() 
{
    int a = 10;
    int b = 20;
    int c = max(a, b);
    printf("max(%d, %d) = %d\n", a, b, c);
    printf("Hello, world!\n");
    return 0;
}