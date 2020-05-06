#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;

int l[1<<20], r[1<<20];
int check[3000000];
int main()
{
    int k, temp, s=0;
    vector<int> g;


    scanf("%d", &k);
    for(int i=0; i<k; i++)
    {
        scanf("%d", &temp);
        g.push_back(temp);
        s+=temp;
    }

    for(int bit=0; bit < (1<<k); bit++)
    {
        for(int i=0; i<k; i++)
        {
            if(bit&(1<<i))
            {
                l[bit] += g[i];
                r[bit] += g[i];
            }

        }
    }
    for(int left=0; left<(1<<k); left++)
    {
        for(int right=0; right<(1<<k); right++)
        {
            int tmp = l[left] - r[right];
            check[tmp] = 1;
        }
    }

    int ans = 0;
    for(int i=1; i<=s; i++)
    {
        if(!check[i])
            ans++;
    }
    printf("%d", ans);

	return 0;
}
