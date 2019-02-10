#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    printf("2^%d = %d", n, (int)pow(2, n));
    return 0;
}
