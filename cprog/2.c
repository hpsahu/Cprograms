#include<stdio.h>
int main()

{
	int ar[100][4],sum[100];
	int t,n,k,e,m,i,j,temp,msum,ssum;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{	ssum=0;
		temp=0;
		msum=0;
		scanf("%d %d %d %d",&n,&k,&e,&m);
		 for(j=0;j<n;j++)
		 {	sum[j]=0;
		 	for(k=0;k<e;k++)
		 	{
		 		if(j==n-1 && k==e-1)
		 		{
		 			break;
				 }
				 scanf("%d",&ar[j][k]);
			 sum[j]=sum[j]+ar[j][k];
			 if(j+1==n)
			 ssum=ssum+ar[j][k];
			 }
			 printf("%d ",sum[j]);
		 }
		 printf("\n");
	for(j=0;j<n-1;j++)
	{
		if(sum[j]>sum[j+1])
		{
			temp=sum[j];
			sum[j]=sum[j+1];
			sum[j+1]=temp;
		}
		printf("%d ",sum[j]);
			
	} 
	printf("\n%d\n",ssum);
	msum=sum[k-1]+1-ssum;
	printf("\n%d\n",msum);
	if(msum>m)
	printf("impossible");
	else if(msum<0)
	printf("0");
	else
	printf("%d",msum);
	}
	return 0;
}
