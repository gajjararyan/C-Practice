#include <stdio.h>

int main(void) {
	int x,y,a;
	printf("enter your age \n ");
	scanf("%d",&a);
		printf("enter minimum  age limit \n ");
	scanf("%d",&x);
		printf("enter maximum age limit\n ");
	scanf("%d",&y);
	if(x<=a<y){
	 printf("YES");   
	}
	else{
	    printf("NO");
	}
	return 0;
}