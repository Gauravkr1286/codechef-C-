#include<stdio.h>
int main()
{
    unsigned short int x; float y;
    scanf("%d%f",&x,&y);
    if(y>=(x+0.5) && x%5==0){
        y=y-x-0.5;
        printf("%.2f",y);
    }
    else
        printf("%.2f",y);
return 0;
}