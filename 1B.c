#include <stdio.h>
#include <math.h>
int main () {
	int a [100];
	int x ;
	for (x = 0 ; x < 100 ; x ++ ){
		a[x] = 0 ;
	}
	int i = 0;
	for ( i = 0 ; i < 100 ; i += 5){
		scanf ("%d %d %d %d %d",&a[i],&a[i+1],&a[i+2],&a[i+3],&a[i+4]);
		if (a[i]==a[i+1]&&a[i+1]==a[i+2]&&a[i+2]==a[i+3]&&a[i+3]==a[i+4]&&a[i]==0){
			break;}
	}
	
	int  b = 0;
	for ( b = 0 ; b < 100 ; b += 5){
		if (a[b]==a[b+1]&&a[b+1]==a[b+2]&&a[b+2]==a[b+3]&&a[b+3]==a[b+4]&&a[b]==0){
			break;
		}else {
			if (a[b+1]-a[b]==a[b+2]-a[b+1]&&a[b+3]-a[b+2]==a[b+2]-a[b+1]&&a[b+4]-a[b+3]==a[b+3]-a[b+2]){
				int n = a[b+1] - a[b];
				int g[5] = {0,0,0,0,0};
				int c ;
				for ( c = 1 ; c < 6 ; c++){
					g[c-1] = a[b+4] + c*n;
				}
				printf ("case one\n");
				printf ("%d %d %d %d %d\n",g[0],g[1],g[2],g[3],g[4]);
				
			}
			if (a[b+1]/a[b]==a[b+2]/a[b+1]&&a[b+3]/a[b+2]==a[b+2]/a[b+1]&&a[b+4]/a[b+3]==a[b+3]/a[b+2]){
				int m = a[b+1] / a[b];
				int c[5] = {0,0,0,0,0};
				int d ;
				for ( d = 1 ; d < 6 ; d++){
					c[d-1] = a[b+4] * pow(m,d);
				}
				printf ("case two\n");
				printf ("%d %d %d %d %d\n",c[0],c[1],c[2],c[3],c[4]);
			}
			if (a[b+2]==a[b]+a[b+1]&&a[b+3]==a[b+2]+a[b+1]&&a[b+4]==a[b+3]+a[b+2]) {
				printf ("case three\n");
				printf ("%d %d %d %d %d",a[b+3]+a[b+4],a[b+4]*2+a[b+3],a[b+3]*2+a[b+4]*3,a[b+3]*3+a[b+4]*5,a[b+3]*5+a[b+4]*8);
			}
			
		}
	}

	
	
}
