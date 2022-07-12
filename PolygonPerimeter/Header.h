/* Header.h */

#ifndef PRACTICE_8_HEADER_H
#define PRACTICE_8_HEADER_H

// Підключення необхідних заголовочних файлів
#include <stdio.h>
#include <math.h>
#include <locale.h>

// Максимальна кількість вершин
#define MAX_SIZE 100

// Кількість вершин багатокутника
int n;
// Масив з координатами вершин багатокутника
double vertices[MAX_SIZE][2];
// Периметр сторін багатокутника
double p;

// Функція, що обчислює периметр
void calcPerimeter(void);

#endif