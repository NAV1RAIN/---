#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int SIZE = 1e4+5;
char str1[SIZE];
char str2[SIZE];
bool flag[SIZE];
int main()
{
    char temp;
    int jl = 0;
    while((temp = getchar()) != '\n') str1[jl++] = temp;
    jl = 0;
    while((temp = getchar()) != '\n') str2[jl++] = temp;
//    printf("%s\n", str1);
//    printf("%s\n", str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for(int i = 0; i < len2; i++) {
        flag[(int)str2[i]] = true;
    }
    for(int i = 0; i < len1; i++) {
        if(!flag[(int)str1[i]]) printf("%c", str1[i]);
    }
    return 0;
}
