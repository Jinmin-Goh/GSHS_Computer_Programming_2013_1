/*#include <stdio.h>
int main()
{
	//반복 
	int n, i, j;
	
	n=0;
	
abc:      //레이블 
	
	printf("%d\n", n);
	if(n>3) goto abcout;
	n++;
	goto abc;
abcout:
	
	if(n>=0)
		printf("%d\n", n--);
	
	while(n>=0)
		printf("%d\n", n--);
	
	while(n<5)
	{
		printf("%d\n", n);
		n=n+1;
	}

	do
	{
		printf("%d\n", n);
		n--;
	}while(n>=-5);
	
	for(i=1; i<=10; i++)
	{
		printf("%d\n", n);
		n++;
	}
	printf("%d\n", i);
	
	for(i=1, n=0; i<=10; i++, n++)
		printf("%d\n", n);
	
	n=5;
	while(n>=0) printf("%d\n", n--);
	printf("%d\n", n);
	
	while(n<=5) printf("%d\n", n++);
	printf("%d\n", n);

	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=5)
		{
			printf("%d %d\n", i, j);
			j++;
		}
		i++;
	}
	
	for(i=1; i<=3; i++)
		for(j=1; j<=3; j++)
			printf("%d %d\n", i, j);

	for(i=1; i<=10; i+=2)
		printf("%d\n", i);
	printf("%d\n", i);

	
	for(; i>=0; i-=2)
		printf("%d\n", i);
	printf("%d\n", i);

	for(i=1, n=0; i<=10; i++)
		n=n+i;
	printf("%d\n", n);
	
	i=1;
	for(;;i*=2)
	{
		if(i>=1024) break;
		printf("%d\n", i);
	}
	
	for(;;i>>=1)
	{
		if(i<=1) break;
		printf("%d\n", i);
	}

	for(i=1; i<=10; i++)
	{
		if(i%5==0)
			break;
		printf("%d\n", i);
	}
	
	for(i=1; i<=10; i++)
	{
		if(i%3==0)
			continue;
		printf("%d\n", i);
	}
	
	for(i=1;; i++)
	{
		if(i>10) break;
		if(i%3==0)
			continue;
		printf("%d\n", i);
	}


	for(i=2;i<=100; i++)
	{
		for(j=2; j<=i-1; j++)
			if(i%j==0) break;
		if(i==j)
			printf("%d\n", i);
	}
	
	n=60;
	for(i=2; n!=1; i++)
	{
		while(n%i==0)
		{
			printf("%d ", i);
			n = n/i;
		}
	}

	for(i=2; i<=15; i++)
		for(j=1; j<=15; j++)
			printf("%x * %x = %x\n", i, j, i*j);
			
	for(i=1; i<=9; i++)
	{
		for(j=2; j<=9; j++)
			printf("%d*%d=%2d ", j, i, i*j);
		printf("\n");
	}*/
	while(1);
	return 0;
}
