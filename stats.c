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
 * @file <stat.C> 
 * @brief <ce fichir souce contient la definition des fonctions du logiciel ainsique la fonction principale >
 *
 * <Add Extended Description Here>
 *
 * @author <BAH Thierno Madiou>
 * @date <08-09-24>
 *
 **/



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
  /* Statistics and Printing Functions Go Here */
  print_statistics(test+8, SIZE-8);
  sort_array(test,SIZE);
  printf("tableau trie : \n");
  for(int i=0; i<SIZE; i++){
  	printf("tab[%d]\t = %d\n",i+1, test[i]);	
	}

}

/* Add other Implementation File Code Here */


void print_statistics(unsigned char tab[], int n){
	printf("les statistiques du tableau sont:\n\tmedianne : %d\n\tmoyenne : %d\n\tmaximum : %d\n\tminimum : %d\n",find_median(tab,n),find_mean(tab,n),find_maximum(tab,n),find_minimum(tab,n));

}

unsigned char find_median(unsigned char tab[], int n){
	sort_array(tab, n);
	if(n%2 == 0)
		return (tab[n/2] + tab[(n/2)+1])/2;
	return tab[(n/2)+1];
}  


unsigned char find_mean(unsigned char tab[], int n){
	int som = 0;
	for(int i=0; i<n; i++){
		som += tab[i];
		
	}
}


unsigned char find_maximum(unsigned char tab[], int n){
	int max = tab[0];

	for(int i=0; i< n; i++){
		if(tab[i] > max){
			max = tab[i];
		}
	}
	return max;
}


unsigned char find_minimum(unsigned char tab[], int n){
	int min = tab[0];

	for(int i=0; i< n; i++){
		
		if(tab[i] < min){
			min = tab[i];
		}
	}
	return min;
	
}


void sort_array(unsigned char tab[], int n){
	unsigned char temp;
	for(int i=0; i<n-1; i++){
		for(int j = i+1; j<n; j++){
			if(tab[i] < tab[j]){
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
		} 
	}

}
