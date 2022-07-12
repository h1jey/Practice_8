/* Source.cpp */

#include "Header.h"

// Функція, що обчислює периметр
void calcPerimeter(void)
{
	for(int i = 0; i < n - 1; i++)
	{
		p += sqrt(
			(vertices[i + 1][0] - vertices[i][0]) * (vertices[i + 1][0] - vertices[i][0]) +
			(vertices[i + 1][1] - vertices[i][1]) * (vertices[i + 1][1] - vertices[i][1])
		);
	}
	p += sqrt(
		(vertices[n - 1][0] - vertices[0][0]) * (vertices[n - 1][0] - vertices[0][0]) +
		(vertices[n - 1][1] - vertices[0][1]) * (vertices[n - 1][1] - vertices[0][1])
	);
}

int main(void)
{
	p = 0;

	// Зміна кодової сторінки потоку stdout
	setlocale(LC_CTYPE, "");

	// Введення кількості вершин багатокутника
	while(true)
	{
		printf("Введiть кiлькiсть вершин багатокутника (3 <= n <= %d): ", MAX_SIZE);

		// Вийти з циклу якщо вдалося зчитати число
		if(scanf("%d", &n) == 1 && n >= 3 && n <= MAX_SIZE)
			break;
	}

	// Введення координат вершин
	printf("\n");
	for(int i = 0; i < n; i++)
	{
		while(true)
		{
			printf("Введiть координати вершини %d: ", i + 1);

			if(scanf("%lf %lf", &vertices[i][0], &vertices[i][1]) == 2)
				break;
		}
	}

	// Обчислення периметру сторін багатокутника
	calcPerimeter();

	// Виведення периметру сторін багатокутника
	printf("\nПериметр сторiн багатокутника: %lf", p);
}