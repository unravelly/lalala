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
	printf ("请输入搜索的数：");
	scanf ("%d",&key) ;
	int length;
	length = sizeof (a)/sizeof (a[0]);
	int ret = search ( key , a ,length);
	if (ret != -1 ){
		printf ("%d在数组中，在第%d位",key,ret+1);
	}else {
		printf ("%d不在数组中",key);
	}
    return 0;
}
