#include<stdio.h>
#include<string.h>
int fun(int n,int m,char b[][m],char w[],int len)
{int l,k,g,h,dir,f;
int x[2]={1,0};
int y[2]={0,1};
for(l=0;l<n;l++)
{
	for(k=0;k<m;k++)
	{
	if(b[l][k]==w[0] || b[l][k]==(w[0]+32))
	{
		for(dir=0;dir<2;dir++)
		{g=l+x[dir];h=k+y[dir];
			for(f=1;f<len;f++)
			{
			if(g>=n || g<0 || h>=m || h<0)
				break;
			if(b[g][h]!=w[f] && b[g][h]!=(w[f]+32))
				break;
			g+=x[dir];h+=y[dir];
			}
			if(f==len)
			return 1;
		}

	}
	}
}
return 0;
}
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n,m;
scanf("%d%d",&n,&m);
char a[n][m];
int i;
for(i=0;i<n;i++)
{
scanf("%s",a[i]);
}
if(fun(n,m,a,"SPOON",5))
    printf("There is a spoon!\n");
else
    printf("There is indeed no spoon!\n");
}
return 0;
}
