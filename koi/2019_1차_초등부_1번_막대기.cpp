/*
	백준 17608	https://www.acmicpc.net/problem/17608
	정올 3333  	http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2626&sca=90
*/

#include <cstdio>

int main()
{
    int n, i;
    scanf("%d", &n);				//막대기 개수 입력

    int arr[n];						//막대기의 길이를 저장할 배열 생성

    for(i=0; i<n; i++)
    {
        scanf(" %d", &arr[i]);		//각 막대기 길이 입력
    }
	
    int last = arr[n-1], max = arr[n-1], cnt = 0;

    for(i=n-2; i>=0; i--)
    {
        if(arr[i] > last && arr[i] > max)
        {
            max = arr[i];
            cnt++;
        }
    }

    printf("%d", cnt+1);
}