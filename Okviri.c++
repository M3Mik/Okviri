#include<stdio.h>
int main() {
    int n=0;
    char word[15];
    scanf("%s",word);
    for (int i=0;word[i] != '\0';i++){
        n += 1;
    }
    for (int i=0;i<n;i++){
        if (i % 3 == 2){
            printf("..*.");
        }
        else {
            printf("..#.");
        }
    }
    printf(".\n");

    for (int i=0;i<n;i++){
        if (i % 3 == 2){
            printf(".*.*");
        }
        else {
            printf(".#.#");
        }
    }
    printf(".\n");

    for (int i=0;i<n;i++){
        if (i != 0 && i % 3 != 1){
            printf("*.%c.",word[i]);
        }
        else {
            printf("#.%c.",word[i]);
        }
    }
    if (n % 3 == 0){
        printf("*\n");
    }
    else {
        printf("#\n");
    }

    for (int i=0;i<n;i++){
        if (i % 3 == 2){
            printf(".*.*");
        }
        else {
            printf(".#.#");
        }
    }
    printf(".\n");

    for (int i=0;i<n;i++){
        if (i % 3 == 2){
            printf("..*.");
        }
        else {
            printf("..#.");
        }
    }
    printf(".");
}