#include <stdio.h>
int main(){
	int input;
	int count = 0;
	int sum = 0;

	printf("Enter number: ");
	scanf("%d", &input);
	while(input > 0){
		count++;
		sum += input;
		printf("Enter number: ");
		scanf("%d", &input);
	}
	printf("sum: %d\n", sum);
	if(count == 0){
		printf("avg: 0");
		return 0;
	}
	printf("avg: %.2f", (float)(sum/count));
		return 0;

}
