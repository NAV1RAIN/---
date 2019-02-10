#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

char str[100];
int main()
{
    scanf("%s", str);
    int len = strlen(str);
    bool f1, f2;
    f1 = f2 = false;
    int num = 0;
    if(str[0] == '-') f1 = true;
    if((str[len-1]-'0')%2 == 0) f2 = true;
    for(int i = 0; i < len; i++) {
        if(str[i] == '2') num++;
    }
    double jj = 1.0;
    if(f1) {
        len--;
        jj *= 1.5;
    }
    if(f2) jj *= 2.0;
    jj *= (num*1.0/len);
    printf("%.2f%%", (jj*100.0));
    return 0;
}
