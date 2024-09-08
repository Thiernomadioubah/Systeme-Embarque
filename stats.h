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
 * @file <stat.h> 
 * @brief <ce fichier contient tous les prototypes des differentes fonctions  develloper et les descriptions >
 *
 * <ce fichier est un fichier header contenant le declaration des fonctions publcique de l'aplication>
 *
 * @author <BAH Thierno Madiou>
 * @date <08-09-24 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

void print_statistics(unsigned char tab[] int n);

/**
 * @brief <cette fonction permet d'affichier les donnes contenues dans le tableau>
 *
 * <Add Extended Description Here>
 *
 * @param <tab[]> <tableau contenat les donnees de type unsigend char>
 * @param <n> <nombre entier corresponant a la taille du tableau>

 *
 * @return < cette fonctiion ne returne rien>
 */

* Add Your Declarations and Function Comments here */ 

unsigned char find_median(unsigned char tab[] int n);

/**
 * @brief <cette fonction permet de trouver la medianne des donnees dans le tableau et de retourner la valeur>
 *
 * <Add Extended Description Here>
 *
 * @param <tab[]> <tableau contenat les donnees de type unsigend char>
 * @param <n> <nombre entier corresponant a la taille du tableau>

 *
 * @return < cette fonctiion retourne la medianne>
 */

unsigned char find_mean(unsigned char tab[] int n);

/**
 * @brief <cette fonction permet de calculer la moyenne des donnees dans le tableau et de retourner la valeur>
 *
 * <Add Extended Description Here>
 *
 * @param <tab[]> <tableau contenat les donnees de type unsigend char>
 * @param <n> <nombre entier corresponant a la taille du tableau>

 *
 * @return < cette fonctiion retourne la valeur moyenne des donnees du tableau>
 */

unsigned char find_maximum(unsigned char tab[] int n);

/**
 * @brief <cette fonction permet de rechercher la valeur maximale dans le tableau et de retourner la valeur>
 *
 * <Add Extended Description Here>
 *
 * @param <tab[]> <tableau contenat les donnees de type unsigend char>
 * @param <n> <nombre entier corresponant a la taille du tableau>

 *
 * @return < cette fonctiion retourne la valeur maximale des donnees du tableau>
 */


unsigned char find_minimum(unsigned char tab[] int n);

/**
 * @brief <cette fonction permet de rechercher la valeur minimale dans le tableau et de retourner la valeur>
 *
 * <Add Extended Description Here>
 *
 * @param <tab[]> <tableau contenat les donnees de type unsigend char>
 * @param <n> <nombre entier corresponant a la taille du tableau>

 *
 * @return < cette fonctiion retourne la valeur minimale des donnees du tableau>
 */



void sort_array(unsigned char tab[] int n);

/**
 * @brief <cette fonction permet de trier les donnnes dans le tableau dans l'orde decroissant>
 *
 * <Add Extended Description Here>
 *
 * @param <tab[]> <tableau contenat les donnees de type unsigend char>
 * @param <n> <nombre entier corresponant a la taille du tableau>

 *
 * @return < cette fonctiion ne retourne rien>
 */

#endif /* __STATS_H__ */
