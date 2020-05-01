/*
	���� 2563	https://www.acmicpc.net/problem/2563
	���� 1438  	http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=712&sca=90
*/
#include<cstdio>
	
int main()
{
	//2���� �迭 map ����. map�迭 => ��ȭ��
	int map[101][101] = { 0, };	
	int n;
	scanf("%d", &n);				//������ ���� n�� �Է¹޴´�.
	for (int i = 0; i < n; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);		//������ ���� n��ŭ �����̸� ���� x,y��ǥ�� �Է¹޴´�.
		for (int j = y; j < y + 10; j++)
		{
			for (int k = x; k < x + 10; k++)
			{
				map[j][k] = 1;		//�����̰� ���� ������ 1�� ǥ���Ѵ�.
			}
		}
	}
	int area = 0;	//���� ���� ������ ����
	for (int i = 0; i < 101; i++)
	{
		for (int j = 0; j < 101; j++)
		{
			area += map[i][j];	//��ü �迭(��ȭ��)�� Ž���ؼ� 1�� ĥ���� �κ��� ������ ���Ѵ�.
		}
	}
	printf("%d", area);
	return 0;
}
