#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,i,j;
    float *p,*t,*q;


    printf("Enter the no. of items\n");
    scanf("%d",&n);
    p=(float *)calloc(n,sizeof(float));
    t=p;
    printf("Enter the prices\n");
    for(i=1;i<=n;i++,p++)
    {
        scanf("%f",p);

    }
    p=t;
    for(i=1;i<n;i++,p++)
    {
        for(j=i+1,q=p+1;j<=n;j++,q++)
        {
            if(*p>*q)
            {
                *p= *p+*q;
                *q = *p-*q;
                *p = *p-*q;
            }

        }
    }

    for(i=1;i<=n;i++,t++)
    {
        printf("%f\n", *t);
    }
    free(t);
    free(p);
    free(q);
}
