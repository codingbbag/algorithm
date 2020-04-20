/*
	백준 17608	https://www.acmicpc.net/problem/17608
	정올 3333  	http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2626&sca=90
*/

#include <cstdio>

int main()
{
	int n, i;
	//막대기 개수 n 입력 
	scanf("%d", &n);
	//막대기의 길이를 저장할 배열 생성
	int arr[n];
	//n개의 막대기 길이 입력
	for(i=0; i<n; i++)
	{
		scanf(" %d", &arr[i]);
	}
	//오른쪽에서 보기 때문에 제일 마지막 막대기 길이를 last에 저장
	//max는 중간에 마지막 막대기보다 큰 막대기가 나오면 그 막대기보다 작은 막대기는 보이지 않기 때문에 따로 최대 길이 값을 저장하기 위한 변수이다.
	//cnt는 보이는 막대기의 개수를 저장. 제일 마지막 막대기는 무조건 보이기 때문에 1로 시작.
	//max도 제일 처음에는 마지막 막대기가 제일 긴 막대기이기 때문에 마지막 막대기 길이를 저장한다.
	int last = arr[n-1], max = arr[n-1], cnt = 1;
	//제일 마지막 막대기 값은 last, max값에 저장되있으므로 제외시키고
	//뒤에서부터 앞으로 막대기들을 탐색한다.
	for(i=n-2; i>=0; i--)
	{
		//마지막 막대기보다 크고, 최대 길이보다 크면 보이는 막대기가 된다.
		if(arr[i] > last && arr[i] > max)
		{
			max = arr[i];
			cnt++;
        }
    }

	printf("%d", cnt);
}