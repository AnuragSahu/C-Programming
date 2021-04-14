#include<stdio.h>

int main()
{
	int distanceinKM;
	printf("Enter the distance in KM's : ");
	scanf("%d", &distanceinKM);
	int distanceinMeters = distanceinKM * 1000;
	float distanceinFeet = distanceinKM * 3280.84;
	float distanceinInches = distanceinKM * 39370.08;
	int distanceinCM = distanceinKM * 1000 * 100;
	printf("Distance in KiloMeters is : %d\n", distanceinKM);
	printf("Distance in Meters is : %d\n", distanceinMeters);
	printf("Distance in feet is : %f\n", distanceinFeet);
	printf("Distance in Inches is : %f\n", distanceinInches);
	printf("Distance in CentiMeters is : %d\n", distanceinCM);
	return 0;
}

