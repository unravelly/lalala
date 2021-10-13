#include <stdio.h>
int main (){
	float target = 2.0f;
	scanf ("%f", &target);
	float left = 0.0f;
	float right = target;
	float mid = (left + right)/2;
	while ((right - left) > 0.000001){
		if (mid * mid < target){
			left = mid;
		}
		else {
			right = mid;
		}
		mid = (left + right)/2;	
	}
	printf ("%f",mid);
	return 0;
}
