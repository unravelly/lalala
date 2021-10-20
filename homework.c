#include<stdio.h>
int main ()
{
	//ÊäÈën 
	int n , sum=0 ,t ,x;
	printf ("ÇëÊäÈëÕûÊı£º");
	scanf ("%d",&n);
	t=n,x=n;
	 
	 //forÓï¾ä
	 for (;n>0;n--) {
	 	sum = sum+n;
	 }
	 printf ("%d\n",sum);
	 
	 //do-whileÓï¾ä
	 sum =0;
	 do {
	 	sum = sum+t;
	 	t--;
	 } while (t>0);
	 printf ("%d\n",sum);
	 
	 //whileÓï¾ä
	 sum =0;
	 while (x>0){
	 	sum=sum+x;
	 	x--;
	 } 
	 printf ("%d",sum);
	 
	 
	 
	 return 0;
 } 
