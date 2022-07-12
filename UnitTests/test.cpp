#include "gtest/gtest.h"

#define MAX_SIZE 100

double calcPerimeter(double vertices[][2], int n)
{
	double p = 0;

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

	return p;
}

TEST(UnitTests, Test1)
{
	// A(0; 0), B(8; 2), C(-2; 6)
	double vertices[3][2] = {{0, 0}, {8, 2}, {-2, 6}};
	EXPECT_DOUBLE_EQ(calcPerimeter(vertices, 3), 25.341096185841089);
}

TEST(UnitTests, Test2)
{
	// A(5; -10) B(0; 1) C(-18; 3) D(7; 7)
	double vertices[4][2] = {{5, -10}, {0, 1}, {-18, 3}, {7, 7}};
	EXPECT_DOUBLE_EQ(calcPerimeter(vertices, 4), 72.62903682083743);
}

TEST(UnitTests, Test3)
{
	// A(2; 1) B(3; 1) C(4; 2) D(5; 4) E(3; 6) F(1; 4) G(1; 2)
	double vertices[7][2] = {{2, 1}, {3, 1}, {4, 2}, {5, 4}, {3, 6}, {1, 4}, {1, 2}};
	EXPECT_DOUBLE_EQ(calcPerimeter(vertices, 7), 13.72134935173836);
}