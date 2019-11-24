#include<stdio.h>
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n,i;
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		while(n%i==0){
			printf("%d ",i);
			n=n/i;
		}

	}
	return 0;
}