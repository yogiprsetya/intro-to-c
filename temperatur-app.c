#include <stdio.h>
#include <stdlib.h>

void makeArray(float arr[], int size) {
	int i;
	
	for(i=0; i < size; i++) {
		printf("Masukan temperatur %d:", i+1);
		scanf("%f", &arr[i]);
	}
}

void printArray(float arr[], int size){
	int i;
	system("@cls||clear");
	
	for(i=0; i<size; i++){
		printf("Temperatur Days %d: %.0f \n", i+1, arr[i]);
	}
	printf("\n");
}

float getSumArray(float arr[], int size){
	int i;
	float sum = 0;
	for(i=0; i < size; i++) {
		sum += arr[i];
	}
	
	return sum;
}

float getAvg(float arr[],int size) {
	float sum = getSumArray(arr, size);
	return sum / size;
}

float getNBelowAvg(float arr[], int size) {
	float avg = getAvg(arr, size);
	int nBelow, i;
	
	for (i=0; i < size; i++) {
		if(arr[i]<avg) nBelow++;
	}
	
	return nBelow;
}

float getNAboveAvg(float arr[], int size) {
	float avg = getAvg(arr, size);
	int nAbove, i;
	
	for (i=0; i < size; i++) {
		if(arr[i]>avg) nAbove++;
	}
	
	return nAbove;
}

float getMinimum(float arr[], int size) {
	int min = arr[0], i;
	
	for(i = 0; i < size; i++) {
        if (arr[i] < min) {
           min = arr[i];
        }
    }
    
    return min;
}


float getMaximum(float arr[], int size) {
	int max = arr[0], i;
	
	for (i = 0; i < size; i++) {
        if (arr[i] > max) {
           max = arr[i];
        }
    }
    
    return max;
}


int main() {
	float arr[60];
	int nHari;
	
	printf("Masukan jumlah hari: ");
	scanf("%d", &nHari);
	makeArray(arr, nHari);
	printArray(arr, nHari);
	printf("Temperatur rata-rata dalam %d hari adalah ", nHari);
	printf("%0.1f", getAvg(arr, nHari));
	printf("\nDengan %0.f hari dibawah", getNBelowAvg(arr, nHari));
	printf(" dan %0.f hari atas rata-rata", getNAboveAvg(arr, nHari));
	printf("\n\nTemperatur paling rendah adalah %0.f", getMinimum(arr, nHari));
	printf(" dan paling tinggi adalah %0.f", getMaximum(arr, nHari));
}
