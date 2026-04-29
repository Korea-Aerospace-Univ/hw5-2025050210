#include <stdio.h>

int main(void)
{
    int N;
    int found=0;
    int i,j,k;
    
    scanf("%d", &N);
    
    for(i=1; i<=N/900; i++)
        for(j=1; j<=N/750; j++)
            for(k=1; k<=N/200; k++)
            
             if(N%(i*900)+(j*750)+(k*200)==0){
                 if(k<i || k<j){
                     if (j%2==0){
                             found=1;
                             printf("%d %d %d",i,j,k);
                         }
                     
                 }
             }
    if(found=0){
        printf("none");
    }
             
    return 0;
}
