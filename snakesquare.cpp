#include <stdio.h>
#include <string.h>
#define MAX 10
int main()
{
	int i,j,k;
	int a[MAX][MAX];
	int n;
	scanf("%d",&n);
	memset(a,0,sizeof(a));
	k=a[i=0][j=n-1]=1;
	while(k<n*n)
	{
		while(i < n-1 && a[i][j-1]!=0) a[i++][j]=k++;
		while(j > 0 && a[i-1][j]!=0  ) a[i][j--]=k++;
		while(i>0 && a[i+1][j]!=0)   a[i--][j]=k++;
		while(j < n-1 && a[i][j+1]!=0) a[i][j++]=k++;
	}
	for(i=0;i<n;++i)
	{
		for(j=0;j<n;++j)
		{
			printf("%3d\n",a[i][j] );
		}
	}
	return 0;
}