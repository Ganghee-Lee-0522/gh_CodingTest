#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    
    if(x > 0) {
        if(y > 0)
            printf("1");
        else
            printf("4");
    } else {
        if(y < 0)
            printf("3");
        else
            printf("2");
    }

    return 0;
}
