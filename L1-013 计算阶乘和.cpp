#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long ll;
ll arr[20];
int main()
{
    ll temp = 1;
    for(int i = 1; i <= 10; i++) {
        temp *= i;
        arr[i] = temp+arr[i-1];
    }
    int n;
    scanf("%d", &n);
    printf("%lld", arr[n]);
    return 0;
}
