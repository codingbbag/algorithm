#include <cstdio>
#include <cstring>

int main()
{
	char str[101000], t_str[101000];
	int n, i, str_cnt;
	scanf("%d", &str_cnt);
	while (str_cnt--)
	{
		scanf("%s", str);
		n = strlen(str);
		for (i = 0; i < n; i++)
		{
			if (str[i] != str[n - 1 - i])
				break;
		}
		if (i == n)
		{
			puts("0");
			continue;
		}

		int pp_idx = i, j = 0;
		for (i = 0; i < n; i++)
		{
			if (i != pp_idx)
				t_str[j++] = str[i];
		}
		for (i = 0; i < j; i++)
		{
			if (t_str[i] != t_str[j - 1 - i])
				break;
		}
		if (i == j)
		{
			puts("1");
			continue;
		}

		j = 0;
		for (i = 0; i < n; i++)
		{
			if (i != n - 1 - pp_idx)
				t_str[j++] = str[i];
		}
		for (i = 0; i < j; i++)
		{
			if (t_str[i] != t_str[j - 1 - i])
				break;
		}
		if (i == j)
		{
			puts("1");
			continue;
		}

		puts("2");
	}
	return 0;
}