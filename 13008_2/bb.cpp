#include<stdio.h>
int m,memo[100001];
int f(int n){
	if(n==0) return memo[n]=1%m;
	if(n==1) return memo[n]=1%m;
	if(n==2) return memo[n]=2%m;
	if(memo[n]>0) return memo[n];
	return memo[n]=(f(n-1)+f(n-2))%m;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
	scanf("%d%d",&n,&m);
	printf("%d",f(n));
}