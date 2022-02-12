#include <stdio.h>
int main(){
    int num[5]={2,5,8,4,9};
    int x;
    for(int i=0;i<(5/2);i++){
        x=num[i];
	  num[i]=num[4-i];
        num[4-i]=x;
    }
    for(int i=0;i<5;i++){
        printf("%d ",num[i]);
    }
    printf("\n\n");
    return 0;
}