#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long ll;
bool cmp(const ll &a, const ll &b) {
    return a < b;
}
int main()
{
    ll arr[5];
    for(int i = 0; i < 3; i++) scanf("%lld", &arr[i]);
    sort(arr, arr+3, cmp);
    printf("%lld", arr[0]);
    for(int i = 1; i < 3; i++) printf("->%lld", arr[i]);
    return 0;
}
