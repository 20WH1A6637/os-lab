#include <stdio.h>

int main()
{
    int las,ps,nop,np,rempages,i,j,x,y,pa,offset;
    int s[10],fno[10][20];
    printf("enter the logical memory size:");
    scanf("%d",&las);
    printf("enter the page size:");
    scanf("%d",&ps);
    nop = las/ps;
    printf("the number of pager available in memory are %d",nop);
    printf("enter the number of processes:");
    scanf("%d",&np);
    rempages = nop;
    for(i=1;i<=np;i++){
        printf("enter no of pages required for p[%d]",i);
        scanf("%d",&s[i]);
        if(s[i]>rempages){
            printf("memory is full");
            break;
        }
        rempages = rempages-s[i];
        printf("enter pagetable for p[%d]",i);
        for(j=1;j<=s[i];j++){
            scanf("%d",&fno[i][j]);
        }
    }
    printf("enter logical address to find physical address");
    printf("enter process no  and pagenumber and offset");
    scanf("%d%d%d",&x,&y,&offset);
    if(x>np||y>=s[i]||offset>=ps){
        printf("invalid process or page number of offset");
    }
    else{
        pa = fno[x][y]*ps+offset;
        printf("the physical address is %d",pa);
        
    }
}
