int main(void)
{
    int N; 
    bool found=false; 
    int i,j,k; 
    
    scanf("%d", &N); 
    
    for(i=1; i<=N/900; i++)
        for(j=2; j<=N/750; j+=2)
            for(k=1; k<=N/200; k++)
             
             if(k<i || k<j){
                 if(N==(i*900+j*750+k*200)){
                    found=true; 
                    printf("%d %d %d\n",i,j,k);
                }
             }    
         
    if(!found){
        printf("none");
    }   
    return 0;
}
