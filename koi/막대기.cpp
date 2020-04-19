#include <cstdio>

int main()
{
    int n, i;
    scanf("%d", &n);

    int arr[n];

    for(i=0; i<n; i++)
    {
        scanf(" %d", &arr[i]);
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