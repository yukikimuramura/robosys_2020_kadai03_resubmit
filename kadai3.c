#include<stdio.h>

int main(void){

	int fibo0 = 1;
	int fibo1 = 1;
	int fibo2;

	printf("%d\n",fibo0);

	while(fibo1 < 100){
		printf("%d\n",fibo1);
		fibo2 = fibo1 + fibo0;
		fibo0 = fibo1;
		fibo1 = fibo2;
	}

	return 0;

}


		
