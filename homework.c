#include<stdio.h>
int main ()
{
	//����n 
	int n , sum=0 ,t ,x;
	printf ("������������");
	scanf ("%d",&n);
	t=n,x=n;
	 
	 //for���
	 for (;n>0;n--) {
	 	sum = sum+n;
	 }
	 printf ("%d\n",sum);
	 
	 //do-while���
	 sum =0;
	 do {
	 	sum = sum+t;
	 	t--;
	 } while (t>0);
	 printf ("%d\n",sum);
	 
	 //while���
	 sum =0;
	 while (x>0){
	 	sum=sum+x;
	 	x--;
	 } 
	 printf ("%d",sum);
	 
	 
	 
	 return 0;
 } 
