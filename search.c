#include <stdio.h>
int search (int key, int a[], int length){
	int ret = -1;
	int i;
	for (i=0 ; i<length ; i++){
		if (a[i]==key){
			ret = i;
		}
	}
	return ret;
}



int main (void){
	int a[]={2,3,5,7,11,13,17};
	int key ;
	printf ("����������������");
	scanf ("%d",&key) ;
	int length;
	length = sizeof (a)/sizeof (a[0]);
	int ret = search ( key , a ,length);
	if (ret != -1 ){
		printf ("%d�������У��ڵ�%dλ",key,ret+1);
	}else {
		printf ("%d����������",key);
	}
    return 0;
}
