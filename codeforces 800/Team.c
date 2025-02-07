#include <stdio.h>

int main() {
    int t, t1 = 0;
    scanf("%d", &t);
    
    while (t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a + b + c > 1) 
            t1++;
    }
    
    printf("%d\n", t1);
    return 0;
}
