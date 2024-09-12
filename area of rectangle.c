//finds the area of a triangle
#include <stdio.h>

int main()
{
	int l,w,area;
//prompts user for input	
	printf("ENTER THE LENGTH:");
	scanf("%d",&l);
	
	printf("ENTER THE WIDTH:");
	scanf("%d",&w);
//executes area then prints
	area = l*w;
	printf("THE AREA IS: %d",area);
	
	return 0;
}