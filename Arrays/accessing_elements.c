#include<stdio.h>

int main(){
	
	float sal[5];
	int totalSalary;
	sal[0] = 1200;
	sal[1] = 1600;
	sal[2] = 1300;
	sal[3] = 1000;
	sal[4] = 1900;
	
	totalSalary = sal[0] + sal[1] + sal[2] + sal[3] + sal[4];
	
	printf("Total Salary %d",totalSalary);
	
}
