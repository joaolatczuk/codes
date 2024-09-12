#include <stdio.h>

int verStr(char*);
int count=0;

int main() {
    char str[1000];
    printf("Digite a string: ");
    scanf("%s",str);
    if(verStr(str)==0){
        printf("A string nao possui a letra 'a' e 'A'");
    }else{
        printf("A string digitada possuia 'a' ou 'A' e aparece %d vez(es)",count);
    }
}

int verStr(char* str){
    for(int i=0;str[i]!=0;i++){
        if(str[i]=='a'||str[i]=='A'){
            count++;
        }
    }
    return count;
}
