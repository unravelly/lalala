#include <stdio.h>
int main (){
	int x;
	//scanf ("%d",&x);
	x=6;
	
	for (x=2;x<100;x++){
		int i;
		int a=1;
		for (i=2;i<x;i++){
			if (x%i==0){
				a=0;
				break;
			}
		}
		if (a==1){
			printf ("%d  ",x);
		}
	}
	printf ("\n");
	
	return 0;
}
