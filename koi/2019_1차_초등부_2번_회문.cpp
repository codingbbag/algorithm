/*
	백준 17609	https://www.acmicpc.net/problem/17609
	정올 3334  	http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2627&sca=90
*/
#include <cstdio>
#include <cstring>

int main()
{
	//문자열 입력받을 str, 임시 문자열 t_str 선언
	char str[101000], t_str[101000];
	int n, i, t;
	//문자열의 개수 입력
	scanf("%d", &t);
	while (t--)
	{
		scanf("%s", str);
		//문자열의 길이를 n 에 저장
		n = strlen(str);
		//입력받은 str이 회문인지 체크
		for (i = 0; i < n; i++)
		{
			//회문이 아니라면 for문을 빠져나간다.
			if (str[i] != str[n - 1 - i])
				break;
		}
		//회문이라서 for문이 정상적으로 완료됐다면 i==n 이므로 "0" 출력하고, 다음 문자열로
		if (i == n)
		{
			puts("0");
			continue;
		}
		//회문이 아닐 경우 index 값이 i에 저장되어 있으므로, i값을 pp_idx 변수에 저장시켜 기억
		int pp_idx = i, j = 0;
		//문자열에서 pp_idx 위치의 문자를 제외한 나머지 문자를 t_str 배열에 저장시켜 문자열을 만든다.
		for (i = 0; i < n; i++)
		{
			if (i != pp_idx)
				t_str[j++] = str[i];
		}
		//만들어진 임시 문자열 t_str이 회문인지 체크
		for (i = 0; i < j; i++)
		{
			//회문이 아니라면 for문을 빠져나간다.
			if (t_str[i] != t_str[j - 1 - i])
				break;
		}
		//for문이 정상적으로 완료됐다면 임시 문자열 t_str이 회문이므로 유사회문 "1" 출력하고, 다음 문자열로
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