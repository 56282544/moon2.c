#include <stdio.h>
#include <string.h>
int days;
struct moon
{
	int n[12][2];
	char moon[12][3];
};
int main(void)
{
	struct moon moonlist = {
		{
			{ 1, 30 },{ 2, 28 },{ 3, 31 },{ 4, 30 },{ 5, 31 },{ 6, 30 },{ 7, 31 },{ 8, 31 },{ 9, 30 },{ 10, 31 },{ 11, 30 },
			{ 12, 31 }
		},
		{
			"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
		}
	};
	struct moon * control;
	//int input_n;
	char input_c[10];
	int i;

	control = &moonlist;
	//scanf("%d", &input_n);
	scanf("%s", &input_c);
	for (i = 0; i < 12; i++)
	{
		//puts(control->moon);
		printf("%s", control->moon[i]);
		int c = strcmp(input_c, control->moon);
		printf("%d", c);
		if (input_c == control->moon[i])
		{
			for (int j = 0; j <= i; j++)
			{
				days += control->n[i][2];
				printf("%d", days);
			}
		}
	}
	printf("To the %s, there are %d days.\n", input_c, days);
	getchar();
	getchar();

	return 0;
}