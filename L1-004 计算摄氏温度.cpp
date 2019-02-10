#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int f;
    scanf("%d", &f);
    int c = 5*(f-32)/9;
    printf("Celsius = %d", c);
    return 0;
}
