#include<stdio.h>
int main(){
    int n; 
    printf("enter n");
    scanf("%d", &n);
    printf("Table\n");
    for(int i = 1; i<=10; i++){
        printf("%d", n*i);
        printf("\n");
    }
    return 0; 
}