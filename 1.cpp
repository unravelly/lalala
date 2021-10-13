#include <stdio.h>

int main ()
{
	int prince = 0;
	printf("请输入金额（元）");
	scanf("%d",&prince) ;
	int change = 100 - prince;
	printf("找您%d元",change);
	return 0 ;
}
