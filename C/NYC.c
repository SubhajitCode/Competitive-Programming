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

        long int j;
        for(j=0;j<n[i];j++)
        {     
            scanf("%ld",&q[j]);
        }
	long int pass = n[i];

	long int result ;
	result = findbribe(q,pass);
	printf("%ld",result);
    }

}
long int findbribe(long int q[],long int qcount)
{
	long int i=0,r=0;
	long int q2[qcount];
	long int qr[qcount];
	for(i=0;i<qcount;i++)
	{
		q2[i]=(i+1);
	}
	for(i=0;i<qcount;i++)
        {
                qr[i]=(q2[i]-*(q+i));
        }
	for(i=0;i<qcount;i++)
        {
		
                if(qr[i]<0)
		{
			if(qr[i]>=-2)
			{
				r=r+qr[i];
			}
			else
			{
				return -1;
			}
		}
        }
	return r;


}
