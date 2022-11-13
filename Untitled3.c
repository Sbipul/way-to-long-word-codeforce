#include<stdio.h>
#include<string.h>
int main(){

    int n,i;
    char word[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        //fgets(word,sizeof(word),stdin);
        scanf("%s",word);
        int l = strlen(word)-1;
        if(l>=10){
            printf("%c%d%c\n",word[0],l-1,word[l]);
        }else{
            puts(word);
        };
    };

    return 0;
};
