//Static Variables in Recursion
#include <stdio.h>
#include <stdlib.h>
int fun(int n)
{
    static int x;
    if(n==0) return 0;
    x++;
    return fun(n-1)+x;
}
int main() {
    system("cls && color 0a");
    int r;
    r = fun(5);
    printf("%d\n",r);
    r=fun(5);
    printf("%d\n",r);
    return 0;
}
/*
 * fun(4) + 5 = 25
 * fun(3) + 5 = 20
 * fun(2) + 5 = 15
 * fun(1) + 5 = 10
 * fun(0) + 5 = 5
*/
