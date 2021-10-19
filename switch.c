#include <stdio.h>
int main (){
	int type;
	printf ("«Î ‰»Î÷∏¡Ó:");
	scanf ("%d",&type);
	switch (type){
		case 1 :
			printf ("Hello!");
			break;
		case 2 :
			printf ("Good morning!");
			break;
		case 3 :
			printf ("Good afternoon!");
			break;
		case 4 :
			printf ("Good night!");
			break;
		default :
			printf ("What's up?");
			break;
			
	}
	return 0;
	
}
