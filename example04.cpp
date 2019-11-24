/*#include <stdio.h>
int main()
{
	//조건 분기
	int n, i, j, a, b, c;
	
	n=0;
	if(n)
	{
		printf("%d\n", 1);
	}
	
	if(!n)
		printf("%d\n", 2);
	
	if(0) printf("3\n");
	if(1) printf("4\n");	
	if(2) printf("5\n");	
	if(-1) printf("6\n");
	
	if(n+3) printf("7\n");
	
	n=3;
	
	if(n!=3) printf("%d\n",8);
	else printf("%d\n",9);
	
	printf("%d\n", n!=3 ? 10 : 11);

 	a=3, b=2, c=1;
	if(a<2)
		printf("%d\n", 12);
	else 
		if(b<2)
			printf("%d\n", 13);
		else
			if(c<2)
				printf("%d\n", 14);
			else
				printf("%d\n", 15);

	n=25;
	if(n%3==0) printf("%d\n", 16);
	else if(n%5==0) printf("%d\n", 17);
	
	if(n%3==0 && n%5==0) printf("%d\n", 18);
	if(n%3==0 || n%5==0) printf("%d\n", 19);

	n=15;
	if(n%3==0)
		if(n%5==0) printf("%d\n", 20);
	else printf("%d\n", 0);
	
	if(n%3==0 && n%5==0) printf("%d\n", 21);
	if(n%3==0 || n%5==0) printf("%d\n", 22);
	
	n=13;
	if(n%2!=0)
		if(n%3!=0)
			if(n%5!=0)
				if(n%7!=0)
					if(n%11!=0) printf("%d\n",23);

	if(n%2==0 || n%3==0 || n%5==0 || n%7==0 || n%11==0)
		printf("%d\n", 24);

	n=13;
	if(n%2!=0) printf("%d\n", 25);
	else if(n%3!=0) printf("%d\n", 26);
	else if(n%5!=0) printf("%d\n", 27);
	else if(n%7!=0) printf("%d\n", 28);
	else if(n%11!=0) printf("%d\n", 29);
	else printf("%d\n",30);

	if(n%2!=0 && n%3!=0 && n%5!=0 && n%7!=0 && n%11!=0)
		printf("%d\n", 31);
		
	if(n%2==0 || n%3==0 || n%5==0 || n%7==0 || n%11==0)
		printf("%d\n", 32);

	n=12;
	switch(n%4)
	{
		case 0: printf("%d\n", 33);
		case 1: printf("%d\n", 34);
		case 2: printf("%d\n", 35);
		case 3: printf("%d\n", 36);
		default : printf("%d\n", 37);
	}
	
	n=12;
	switch(n%3)
	{
		case 0: printf("%d\n", 38); break;
		case 1: printf("%d\n", 39); break;
		case 2: printf("%d\n", 40); break;
		case 3: printf("%d\n", 41); break;
		default : printf("%d\n", 42);
	}

	n=12;
	switch(n%10)
	{
		case 0: 
		case 1: printf("%d\n", 43); break;
		case 2: 
		case 3: printf("%d\n", 44); break;
		default : printf("%d\n", 45);
	}

	n=12;
	switch(n%4)
	{
		case 3: printf("%d\n", 46);
		case 4: printf("%d\n", 47);
		case 1: printf("%d\n", 48);
		case 2: printf("%d\n", 49);
		default : printf("%d\n", 50);
	}
	while(1);
	return 0;
}
*/