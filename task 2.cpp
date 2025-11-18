int main() {
	int arr1[10];
	int arr2[10];
	int arr3[10];

	

	for (int i = 0; i < 10; i++)
	{

		arr1[i] = 43 - i;
	}
	
	for (int i = 0; i < 10; i++)
	{
		arr2[i] = 37 + i;
	}
	
	int k = 0; 
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr1[i] == arr2[j])

			{
				arr3[k] = arr1[i];
					k++;
				break;
			}

		}

	}
	int multipl = 1;
	for (int i = 0; i < k; i++)
	{
		if (arr3[i] > 40)
		{
			multipl = multipl * arr3[i];

		}

	}
	return 0;
}
