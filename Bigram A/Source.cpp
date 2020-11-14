#include<stdio.h>
struct number {

	int N[1000] = {};
	int a = 0;
	int b = 0;
	int	c = 0;
	int	d = 0;
	int e = 0;
	int x = 0;
	
};
void Bigram(struct number num)
{
	
	struct number value;

	

	for (int i = 0;1;i++)
	{
		scanf_s("%d", &value.N[i]);
		value.a++;
		if (value.N[i] > 1)
		{
			break;
		}
	}

	for (int i = 0;i < value.a;i++)
	{
		if (value.N[i] == 0 && value.N[i + 1] == 0)
		{
			value.b++;
		}
		if (value.N[i] == 0 && value.N[i + 1] == 1)
		{
			value.c++;
		}
		if (value.N[i] == 1 && value.N[i + 1] == 0)
		{
			value.d++;
		}
		if (value.N[i] == 1 && value.N[i + 1] == 1)
		{
			value.e++;
		}

	}

	value.x = value.x + 1;

	printf("\n%d", value.b);

	printf("\n%d", value.c);

	printf("\n%d", value.d);

	printf("\n%d", value.e);


	
	


}
int main()
{
	struct number value;

	Bigram(value);

	
	

	return 0;
}