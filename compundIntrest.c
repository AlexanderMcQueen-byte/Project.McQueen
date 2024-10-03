#include<stdio.h>
#include<math.h>

int main (){
	/*p-principle
	r-rate
	n-number of times the interest is applied per period
	t-time
	A- amount
	CI-compound interest
	*/
	
	double  p;
	double r;
	double t;
	double n;
	double A;
	double CI;
	
	
	printf("enter principle");
	scanf("%lf",&p);
	
	printf("enter rate");
	scanf("%lf",&r);
	
	printf("enter number of times the interest is applied per period");
	scanf("%lf",&n);
	
	printf("time");
	scanf("%lf",&t);
	
	A=p*pow((1+(r/100)/n),n*t);
	
	
	printf("your amount is %.2lf\n",A);
	
	CI=A-p;
	printf("your compound interest is %.2lf",CI);
	
	return 0;
}
