#include <iostream>
using namespace std;
void show_massive(int array[], int size_array)
{
	for (int i = 0; i < size_array; i++)
	{
		cout << array[i] << "\t";
	}
}
	void create_array(int array[], int size_array)
	{
		const int size = 20;
		srand((unsigned int)time(NULL));
		int massive[20];
		for (int i = 0; i < size; i++)
		{
			massive[i] = rand() % 20;
		}
	
	}
int main()
{
	const int size = 20;
	srand((unsigned int)time(NULL));
	int massive[20];
	create_array(massive, size);
	show_massive(massive, size);
	cout << "\n\n";
	
	for (int i = 0; i < size; i++)
	{
		massive[i] = massive[size - 1 - rand() % (size - i)];
	}
	show_massive(massive, size);

}
