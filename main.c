#include <stdio.h>

float calcBmi(float w, float h)
{
	float bmi = w/(h*h);
	return bmi;
}

void printBmi(float bmiValue)
{
	if(bmiValue < 18.5)
		printf("Underweight");
	else if(bmiValue < 25)
		printf("Normal");
	else if(bmiValue < 30)
		printf("Overweight");
	else
		printf("Obese");
}

int getKuadran(float x, float y)
{
	int q = 0;
	
	if (x > 0 && y > 0)
		q = 1;
	else if (x < 0 && y > 0)
		q = 2;
	else if (x < 0 && y < 0)
		q = 3;
	else q = 4;
	
	return q;
}

void countSalary(int salary)
{
	if (salary < 4000000)
		printf("lower");
	else if (salary < 9000000)
		printf("middle");
	else printf("upper");
}

int main()
{
	float bmi = calcBmi(70,1.70);
	printf("hello, you bmi is %f \n", bmi);
	printf("You are ");
	printBmi(bmi);
	printf("\n \n \n");
	
	float x, y;
	x = -8;
	y = 2;
	printf("%f, %f is in kuadran %d \n", x, y, getKuadran(x,y));
	printf("\n \n \n");
	
	int salary;
	salary = 15000000;
	printf("Penghasilan %d ", salary);
	printf("Golongan income ");
	countSalary(salary);
}
