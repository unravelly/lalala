//ÕûÊıµ¹Ğò 

#include <stdio.h>
int main (){
	int a,b=0,c=0;
	
	scanf ("%d",&a);
	while (a>0){
		b=a%10;
		a/=10;
		c=b+c*10;
		printf ("%d",b);
	}
    //printf ("%d",c);
	return 0;
} 
