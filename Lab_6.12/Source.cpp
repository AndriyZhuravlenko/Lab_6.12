#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
void Create(int* b, const int size, const int Low, const int High, int i)
{
	b[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(b, size, Low, High, i + 1);
}
void Print(int* b, const int size, int i)
{
	cout << setw(4) << b[i];
	if (i < size - 1)
		Print(b, size, i + 1);
	else
		cout << endl;
}
int Number(int* b, const int size, int count, int i)
{
	if (!(b[i] % 5 == 0 && b[i] > 0))
		count++;
	if (i < size - 1)
		Number(b, size, count, i + 1);
	else
		return count;
}
int Sum(int* b, const int size, int i)
{
	if (i < size)
	{
		if (!(b[i] % 5 == 0 && b[i] > 0))
			return b[i] + Sum(b, size, i + 1);
		else
			return Sum(b, size, i + 1);
	}
	else
		return 0;
}
int Mode(int* b, const int size, int i)
{
	if (!(b[i] % 5 == 0 && b[i] > 0))
		b[i] = 0;
	if (i < size - 1)
		Mode(b, size, i + 1);
	else
		return 0;
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 22;
	int b[n];
	int Low = -40;
	int High = 50;
	Create(b, n, Low, High, 0);
	Print(b, n, 0);
	cout << "  " << "N = " << Number(b, n, 0, 0) << endl;
	cout << "  " << "S = " << Sum(b, n, 0) << endl;
	Mode(b, n, 0);
	Print(b, n, 0);
	return 0;
}