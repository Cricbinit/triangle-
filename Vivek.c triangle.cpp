#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{
	float a, b, c, s, area;
	printf("Enter three sides :");
	scanf("%f %f %f" ,&a ,&b ,&c);
	s = (a + b + c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of triangle = %6.2f Sq.units" ,area);
	getch();
	
}
