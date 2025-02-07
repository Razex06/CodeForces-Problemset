#include <stdio.h>

int main(){
    int t,x = 0;
    scanf("%d", &t);
    while(t--){
        char chars[4];
        scanf("%s", chars);
        switch (chars[1])
        {
        case '+':
            x++;
            break;
        case '-':
            x--;
            break;            
        default:
            break;
        }
    }
    printf("%d", x);
}
