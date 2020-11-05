#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void){
	
	int i;
	int grade[5];
	int sum=0;
	int avg;
	for (i=0;i<5;i++){
		printf("grade[%i] = ", i);
		scanf("%d", &grade[i]);
		sum+=grade[i];		
	}
		avg=sum/5;
	
	for (i=0;i<5;i++)
		printf("grade[%d] = %d\n",i,grade[i]);

	printf("average : %d",avg);
	
	return 0;
}
