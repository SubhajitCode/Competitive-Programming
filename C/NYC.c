#include<stdio.h>
#include<string.h>
void main()
{   int t;
    scanf("%d",&t);
    int i;
    long int n[t];
    
    for(i=0;i<t;i++)
    {
        scanf("%ld",&n[i]);
        long int q[n[i]];

        int j;
        for(j=0;j<n[i];j++)
        {     
            scanf("%d",&q[j]);
        }
    }

}