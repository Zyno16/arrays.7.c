#include <stdio.h>
#include <stdlib.h>

int main()
{float c[20];
float s;
int i;
s=1000;
for(i=0;i<20;i++){
s=s+s*0.02;
c[i]=s;
}
for(i=0;i<20;i++){
    printf("thr balance of account is=%.2f\n number a years",c[i],i);
}







    return 0;
}
