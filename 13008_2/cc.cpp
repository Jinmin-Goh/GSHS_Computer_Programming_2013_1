#include<stdio.h>
int m,n,k,p,sum,i,A[702],flag;
double s;
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	scanf("%d%d",&n,&m);
	if(n==m){
		for(i=1;i<=n;i++)
			scanf("%d",&p);
		printf("Perfect");
	}
	else{
		for(i=1;i<=n;i++){
			scanf("%d",&k);
			A[k]++;}
		for(i=1;i<=700;i++){
			while(A[i]>0){
				sum=sum+i;
				A[i]=A[i]-1;
				p=p+1;
				if(p==n-m) flag=1;
			}
			if(flag==1) break;
		}
	
	s=(double)sum/10;
	printf("%.1lf",s);
	}
	return 0;
}