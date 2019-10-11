/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Implementation file for the stats.h file for the C1M1 assessment
 *
 * @author Ahmed Magdy
 * @date Oct. 2019
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char median,
		mean,
		maximum,
		minimum;

  /* Statistics and Printing Functions Go Here */
  print_array(test, SIZE);
  print_statistics(test, SIZE);

}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char array[], unsigned int size){
	printf("MEDIAN: %d\n", find_median(array, size));
	printf("MEAN: %d\n", find_mean(array, size));
	printf("MAXIMUM: %d\n", find_maximum(array, size));
	printf("MINIMUM: %d\n", find_minimum(array, size));
}

void print_array(unsigned char array[], unsigned int size){
	printf("ARRAY: \n");
	for (int i = 0; i < size; i ++)
		printf("%d\n", array[i]);
	printf("\n\n");
}

unsigned char find_median(unsigned char array[], unsigned int size){
	unsigned char sorted[size];
	sort_array(array, size, sorted);
	if (size%2==0) return sorted[size/2];
	else return (unsigned char)(((unsigned int)sorted[size/2]+sorted[size/2+1])/2);
}

unsigned char find_mean(unsigned char array[], unsigned int size){
	unsigned long long sum = 0;
	for (int i = 0; i < size; i ++)
		sum += array[i];
	return sum / size;
}

unsigned char find_maximum(unsigned char array[], unsigned int size){
	unsigned char maximum = 0;
	for (int i = 0; i < size; i ++)
		if (array[i] > maximum)
			maximum = array[i];
	return maximum;
}

unsigned char find_minimum(unsigned char array[], unsigned int size){
	unsigned char minimum = (unsigned char) (-1);
	for (int i = 0; i < size; i ++)
		if (array[i] < minimum)
			minimum = array[i];
	return minimum;
}

void sort_array (unsigned char array[], unsigned int size, unsigned char sorted[]){
	memcpy(sorted, array, size);
	for (int i = 0; i < size-1; i ++)
		for (int j = i+1; j < size; j ++)
			if (sorted[i] < sorted[j]){
				unsigned char temp = sorted[i];
				sorted[i] = sorted[j];
				sorted[j] = temp;
			}
}

