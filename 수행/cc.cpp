#include<stdio.h>
int gcd(int p,int q){
	int r,t;	
	if(p<q){
		t=p;
		p=q;
		q=t;
	}
	while(q){
	r=p%q;
	p=q;
	q=r;
	}
	return p;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int i=1,n,a,b,c=0,d=0,e,f;
	scanf("%d",&n);

	for(i;i<=n;i++){
		scanf("%d%d",&a,&b);
		if(i==1){
			c=a;
			d=b;
		}
		else{
			f=d*b;
			e=a*d+b*c;
			d=f/gcd(e,f);
			c=e/gcd(e,f);
			//e=c/gcd(b,d);
			//c=c+e;
			//d=d+f;
		}
		
	}
	if(c==0)
		printf("0");
	else
	printf("%d/%d",c,d);

}