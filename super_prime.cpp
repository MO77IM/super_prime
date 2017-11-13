#include <stdio.h>
#include <math.h>

bool is_prime(int num);
int main(void){
	int num,sum,pro,rem,cp;
	int count = 0;
	int max = 0;
	for(num=100;num<=9999;num++)
	{
		cp = num;
		sum = 0;
		pro = 1;
		while(cp>0)
		{
			rem = cp%10;
			sum += rem;
			pro *= rem;
			cp /= 10;
		}
	    if(pro!=0&&is_prime(pro)&&is_prime(sum)&&is_prime(num))
	      {
	      	printf("%d is a super prime\n", num);
	        max = num;
	        count++;
		  }     
	}
	printf("There's %d super prime\n", count);
	printf("The largest super prime is %d\n", max);
	return 0;
}

bool is_prime(int num){
	int i;
	for(i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
		  return false;
	}
	return true;
}
