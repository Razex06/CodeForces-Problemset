#include <stdio.h>

int main(){
    int t,x = 0;
    scanf("%d", &t);
    while(t--){
        char chars[4];
        scanf("%s", chars);
        switch (chars[0])
        {
        case 'X':
            switch (chars[1])
            {
            case '-':
                x--;
                break;
            case '+':
                x++;
                break;
            default:
                break;
            }
            break;
        case '+':
            x += 1;
            break;
        case '-':
            x-=1;
            break;            
        default:
            break;
        }
    }
    printf("%d", x);
}