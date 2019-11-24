/*#include <stdio.h>
int main()
{
	//연산자, 형변환, 오버플로 
	int n; long long l;
	
	n = -5;
	printf("%d %d %d %d %d\n", n, +n, -n, n+1, n-1);
	printf("%d %d %d %d %d\n", n*3, n*3.0, n/3, n/3.0);
	printf("%d %d %d %d %d\n", n*3, n*(int)(3.0), (int)(n/3), n/3.0);
	printf("%f %f %f %f %f\n", n*3, n*(int)(3.0), (int)(n/3), n/3.0);
//	printf("%d %d %d %d %d\n", n%3, n%(int)(3.0), (int)(n%3), n%3.0);//compile error

    n = 3;
    printf("%d %d %d %d %d\n", n>3, n>=3, n<=3, n==3, n<3);
    printf("%d %d %d %d %d\n", n>3 && n>=3, n>=3 || n<3, !(n<=3), !(n==3), !((n<3)));
    printf("%d %d %d %d %d %d\n", n&5, n|5, ~n, n^5, n<<1, n>>1);

    printf("%d\n", n++);
    printf("%d\n", ++n);
    printf("%d\n", n--);
    printf("%d\n", --n);

    n+=1; printf("%d\n", n);
    n-=2; printf("%d\n", n);
    n*=3; printf("%d\n", n);
    n/=4; printf("%d\n", n);
    n%=5; printf("%d\n", n);
    n<<=1; printf("%d\n", n);
    n>>=1; printf("%d\n", n);
    n&=2; printf("%d\n", n);
    n|=3; printf("%d\n", n);
    n^=4; printf("%d\n", n);
    
	n = 2147483647;
	l = 2147483647;
	printf("%d %d %lld %lld\n", n, n+1, l, l+1);
	n = -2147483648LL;
	l = -2147483648LL;
	printf("%d %d %lld %lld\n", n, n-1, l, l-1);
	
	
}
*/