#include<stdio.h>
int main()
{ 
int t,n,k[100001],a,flag,i,j,l;
scanf("%d",&t);
for(i=0;i<t;i++)
{   flag=0;
	scanf("%d",&n);
	for(j=0;j<n;j++)
 {
     scanf("%d",&k[j]);
 }
    scanf("%d",&a);
                                        for(l=0;l<t;l++)
                                         {
											
												for(j=0;j<n;j++)
 														{
     															if(k[l]*k[j]==a)
     															{
     																flag=1;
																 }
                                                        }
 

                                        }

   if(flag==1)
   {
   	printf("Yes");
   }
   else
   printf("No");

}
return 0;

}
