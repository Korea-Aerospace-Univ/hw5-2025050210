#include <stdio.h>

int main(void)
{
    int N; //정수 N선언
    int found=0; //값을 찾았을때 표현 값 found 0으로 초기화
    int i,j,k; //i는 a의 개수, j는 b의 개수, k는 c의 개수
    
    scanf("%d", &N); 
    
    for(i=1; i<=N/900; i++)
        for(j=2; j<=N/750; j+=2)
            for(k=1; k<=N/200; k++)
             
             if(k<i || k<j){
                 if(N==(i*900+j*750+k*200)){
                    found=1; 
                    printf("%d %d %d\n",i,j,k);
                }
             }    
         
    if(found==0){
        printf("none");
    }   
    return 0;
}
