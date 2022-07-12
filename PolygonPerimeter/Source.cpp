/* Source.cpp */

#include "Header.h"

// �������, �� �������� ��������
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

	// ���� ������ ������� ������ stdout
	setlocale(LC_CTYPE, "");

	// �������� ������� ������ �������������
	while(true)
	{
		printf("����i�� �i���i��� ������ ������������� (3 <= n <= %d): ", MAX_SIZE);

		// ����� � ����� ���� ������� ������� �����
		if(scanf("%d", &n) == 1 && n >= 3 && n <= MAX_SIZE)
			break;
	}

	// �������� ��������� ������
	printf("\n");
	for(int i = 0; i < n; i++)
	{
		while(true)
		{
			printf("����i�� ���������� ������� %d: ", i + 1);

			if(scanf("%lf %lf", &vertices[i][0], &vertices[i][1]) == 2)
				break;
		}
	}

	// ���������� ��������� ����� �������������
	calcPerimeter();

	// ��������� ��������� ����� �������������
	printf("\n�������� ����i� �������������: %lf", p);
}