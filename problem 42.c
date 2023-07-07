#include<stdio.h>
#include<math.h>
int main(){
int T;
scanf("%d",&T);
while(T--){
int n,i;
scanf("%d",&n);
if(n>=2){
for(i=n;i>=2;i--){
    printf("2^%d + ",i);
}
printf("2 + 1\n");
}else if(n==1){
printf("2 + 1\n");
}else if(n==0){
printf("1\n");
}
}
return 0;
}
