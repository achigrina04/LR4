//Сортировка вставками
void sort(int *arr, int n)
{
	int newElement, location;

	for (int i = 1; i < n; i++)
	{
		newElement = arr[i];
		location = i - 1;
		while (location >= 0 && arr[location] > newElement)
		{
			arr[location + 1] = arr[location];
			location = location - 1;
		}
		arr[location + 1] = newElement;
	}
}


