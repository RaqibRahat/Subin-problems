#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int i,c=0;
        char s[1001];
        scanf(" %[^\n]",s);
        for(i=0;s[i]!='\0';i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                c++;
            }
        }
        printf("Number of vowels = %d\n",c);
    }
    return 0;
}
