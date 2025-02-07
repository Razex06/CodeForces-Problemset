#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        char word[101];
        scanf("%s", word);
        if(strlen(word) > 10){
            printf("%c%d%c\n", word[0],strlen(word)- 2, word[(strlen(word)-1)]);
        }else printf("%s\n", word);
    }
    return 0;
}