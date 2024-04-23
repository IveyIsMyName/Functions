#pragma once
#include"constants.h"

void shiftLeft(int shift, int arr[], const int n);
void shiftLeft(int shift, double arr[], const int n);
void shiftLeft(int shift, char arr[], const int n);

void shiftLeft(int shift, int arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftRight(int shift, int arr[], const int n);
void shiftRight(int shift, double arr[], const int n);
void shiftRight(int shift, char arr[], const int n);