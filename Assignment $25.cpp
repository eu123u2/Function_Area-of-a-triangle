/*Ezigbo Ugochukwu 12/4/2020 Area of a triangle*/

float AREA(float a, float b, float c);

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{	
	float a, b, c, s, area;
	
	do
	{
		printf("Enter the three sides of a triangle - must be positive numbers:");
		scanf("%f %f %f", &a, &b, &c);
	} while (a <= 0 || b <= 0 || c <= 0);
	
	printf ("The area of the triangle is %f. \n", AREA(a, b, c));
	return 0;
}

float AREA(float a, float b, float c)
{	
	double area;
	float s;
	
	s = (a + b + c) / 2;
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	
	return(area);
}

/*Enter the three sides of a triangle - must be positive numbers:-1 8 5
Enter the three sides of a triangle - must be positive numbers:0 6 7
Enter the three sides of a triangle - must be positive numbers:7 6 9
The area of the triangle is 20.976177.
Enter the three sides of a triangle - must be positive numbers:3 4 5
The area of the triangle is 6.000000.*/
