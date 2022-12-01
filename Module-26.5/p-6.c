#include<stdio.h>
#include<string.h>
void changeCase(char *str, int len){
    for(int i=0;i<len;i++){
        if((str[i]-96)%2==0){
            str[i]=str[i]-32;
        }
    }
}
int main()
{
    char str[1000];
    gets(str);
    changeCase(str,strlen(str));
//    for(int i=0;i<strlen(str);i++){
//        printf("%c ",str[i]);
//    }
    printf("%s ",str);
    return 0;
}
