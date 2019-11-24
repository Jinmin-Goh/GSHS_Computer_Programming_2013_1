#include<stdio.h>
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int h,m,t;
	scanf("%d%d%d",&h,&m,&t);
	if(m+t<60) printf("%d %d",h,m+t);
	else if(((m+t)%60)==0&&((m+t)/60)+h<24) printf("%d 00",h+(m+t)/60);
	else if(m+t>=60&&((m+t)/60)+h<24) printf("%d %d",h+(m+t)/60,(m+t)%60);
	else if(((m+t)%60)==0) printf("%d 00",(h+(m+t)/60)%24);
	else printf("%d %d",(h+(m+t)/60)%24,(m+t)%60);
	return 0;
}