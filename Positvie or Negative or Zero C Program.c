#include <stdio.h>

int main(void) {

	double no;
	scanf("%lf",&no);
	if(no<0.0)
	{
		printf("%lf Is Negative ",no);
	}
	else if(no==0)
	{
		printf("%lf Is Zero",no);
	}
	else
	{
		printf("%lf Is Positive",no);
	}

	return 0;
}