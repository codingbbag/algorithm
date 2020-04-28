/*
	���� 17609	https://www.acmicpc.net/problem/17609
	���� 3334  	http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2627&sca=90
*/
#include <cstdio>
#include <cstring>

int main()
{
	//���ڿ� �Է¹��� str, �ӽ� ���ڿ� t_str ����
	char str[101000], t_str[101000];
	int n, i, t;
	//���ڿ��� ���� �Է�
	scanf("%d", &t);
	while (t--)
	{
		scanf("%s", str);
		//���ڿ��� ���̸� n �� ����
		n = strlen(str);
		//�Է¹��� str�� ȸ������ üũ
		for (i = 0; i < n; i++)
		{
			//ȸ���� �ƴ϶�� for���� ����������.
			if (str[i] != str[n - 1 - i])
				break;
		}
		//ȸ���̶� for���� ���������� �Ϸ�ƴٸ� i==n �̹Ƿ� "0" ����ϰ�, ���� ���ڿ���
		if (i == n)
		{
			puts("0");
			continue;
		}
		//ȸ���� �ƴ� ��� index ���� i�� ����Ǿ� �����Ƿ�, i���� pp_idx ������ ������� ���
		int pp_idx = i, j = 0;
		//���ڿ����� pp_idx ��ġ�� ���ڸ� ������ ������ ���ڸ� t_str �迭�� ������� ���ڿ��� �����.
		for (i = 0; i < n; i++)
		{
			if (i != pp_idx)
				t_str[j++] = str[i];
		}
		//������� �ӽ� ���ڿ� t_str�� ȸ������ üũ
		for (i = 0; i < j; i++)
		{
			//ȸ���� �ƴ϶�� for���� ����������.
			if (t_str[i] != t_str[j - 1 - i])
				break;
		}
		//for���� ���������� �Ϸ�ƴٸ� �ӽ� ���ڿ� t_str�� ȸ���̹Ƿ� ����ȸ�� "1" ����ϰ�, ���� ���ڿ���
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