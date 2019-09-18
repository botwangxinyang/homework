#pragma once
#ifndef __SCORE_H__
#define  __SCORE_H__


#include<stdio.h>
typedef struct sudent
{
	char number[10];
	char name[10];
	float dailyScore;
	float finalScore;
	float generalScore;
}SS;
void calcuSore(SS stu[], int N);
SS* readDataFromFile(int *N);

void calcuScore(SS stu[], int N);

void sortScore(SS stu[], int N);

void printOut(SS stu[], int N);
void averagenubmer(SS stu[], int N);
void variance(SS stu[], int N);
void Sort(SS stu[], int N);
#endif