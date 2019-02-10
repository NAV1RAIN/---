#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

char str[20][20] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu", "fu"};
char temp[100];
int main()
{
    scanf("%s", temp);
    int len = strlen(temp);
    printf("%s", temp[0] == '-' ? str[10] : str[temp[0]-'0']);
    for(int i = 1; i < len; i++) {
        printf(" %s", temp[i] == '-' ? str[10] : str[temp[i]-'0']);
    }
    return 0;
}
