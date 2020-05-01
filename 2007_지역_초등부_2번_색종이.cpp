/*
	백준 2563	https://www.acmicpc.net/problem/2563
	정올 1438  	http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=712&sca=90
*/
#include<cstdio>
	
int main()
{
	//2차원 배열 map 생성. map배열 => 도화지
	int map[101][101] = { 0, };	
	int n;
	scanf("%d", &n);				//색종이 개수 n을 입력받는다.
	for (int i = 0; i < n; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);		//색종이 개수 n만큼 색종이를 붙일 x,y좌표를 입력받는다.
		for (int j = y; j < y + 10; j++)
		{
			for (int k = x; k < x + 10; k++)
			{
				map[j][k] = 1;		//색종이가 붙은 영역을 1로 표시한다.
			}
		}
	}
	int area = 0;	//넓이 값을 저장할 변수
	for (int i = 0; i < 101; i++)
	{
		for (int j = 0; j < 101; j++)
		{
			area += map[i][j];	//전체 배열(도화지)를 탐색해서 1로 칠해진 부분의 총합을 구한다.
		}
	}
	printf("%d", area);
	return 0;
}
