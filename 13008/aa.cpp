#include<stdio.h>
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int a,b,n=0,t,i;
	scanf("%d%d",&a,&b);
	if(a<b){
		t=a;
		a=b;
		b=t;
	}
	for(i=b;i<=a;i++){
		if(i%400==0||(i%100!=0&&i%4==0))
			n=n+1;
	}
	printf("%d",n);


}