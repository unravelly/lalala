#include <stdio.h>
int search (int key ,int a [], int length){
	int i ;
	int ret = -1;
	for ( i = 0; i < length ; i++){
		if ( key == a [i]){
			ret = i;
			break;
		}
	}
	return ret ;
}
int main (void){
	int number [] = {1,2,3,4,5,6,7,8,9,10,11,12};
	char *English [] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
	int key ;
	int ret ;
	scanf ("%d",&key);
	ret = search ( key ,number , sizeof(number)/sizeof (number[0]));
	if ( ret != -1 ){
		printf ("%s",English[ret]);
	}else {
		printf ("Not found.");
	}
}
