#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

char str[1005];
int num[15];
int main()
{
    scanf("%s", str);
    int len = strlen(str);
    for(int i = 0; i < len; i++) {
        num[str[i]-'0']++;
    }
    for(int i = 0; i <= 9; i++) {
        if(num[i] != 0) {
            printf("%d:%d\n", i, num[i]);
        }
    }
    return 0;
}
