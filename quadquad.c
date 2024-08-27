#include<stdio.h>
#include<math.h>
float a, b, c, d, s1, s2;
int main() {

	printf("This is a Quadratic Equation Solver, i can solve quadratic equations in the format Ax^2 + Bx + C = 0, But only if there roots are real \n");
	printf(" Enter A,B and C : \n");
	scanf("%f %f %f" ,&a, &b, &c);

	d = (b*b) - 4*a*c;
		 if ( d > 0 || d == 0) {

			 s1 = (-b+d)/2*a;
				 s2 = (-b-d)/2*a;
				 printf(" solutions of your quadratic are %f %f \n" ,s1, s2);
			 return 0;
		 }
		 else { 
			 printf("Sorry i can't do that :( , the quadratic you entered has imaginary roots \n");
			return 0;
		 }

		

return 0; }


