#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

struct node{
    unsigned long long kz;
    int kszw;
} arr[1005];

int main()
{
    int T;
    scanf("%d", &T);
    for(int i = 0; i < T; i++) {
        int temp;
        node tt;
        scanf("%llu%d%d", &tt.kz, &temp, &tt.kszw);
        arr[temp] = tt;
    }
    scanf("%d", &T);
    while(T--) {
        int n;
        scanf("%d", &n);
        printf("%llu %d\n", arr[n].kz, arr[n].kszw);
    }
    return 0;
}
