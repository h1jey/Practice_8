/* Header.h */

#ifndef PRACTICE_8_HEADER_H
#define PRACTICE_8_HEADER_H

// ϳ��������� ���������� ������������ �����
#include <stdio.h>
#include <math.h>
#include <locale.h>

// ����������� ������� ������
#define MAX_SIZE 100

// ʳ������ ������ �������������
int n;
// ����� � ������������ ������ �������������
double vertices[MAX_SIZE][2];
// �������� ����� �������������
double p;

// �������, �� �������� ��������
void calcPerimeter(void);

#endif