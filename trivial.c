void trivial(char str[], int n, int d)
{
	char temp = 0;
	if (d > 0)
	{
		for (int i = d; i > 0; i--)
		{
			temp = str[0];
			for (int j = 0; j < n - 1; j++)
				str[j] = str[j + 1];
			str[n - 1] = temp;
		}
	}
	else 
	{
		d = (-d);
		for (int i = d; i > 0; i--)
		{
			temp = str[n - 1];
			for (int j = n - 1; j > 0; j--)
				str[j] = str[j - 1];
			str[0] = temp;
		}
	}
}
