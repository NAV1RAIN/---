#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
typedef unsigned long long ull;
const int MOD = 11;
char str1[105];
int arr1[20] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char jiaoyan[20] = {'1','0','X','9','8','7','6','5','4','3','2'};
int main()
{
//    freopen("in.txt", "r", stdin);
    bool flag = true;
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%s", str1);
        int len = strlen(str1);
        int sum = 0;
        bool ok = true;
        for(int i = 0; i < len-1; i++) {
            if(str1[i] < '0' || str1[i] > '9') {
                flag = ok = false;
                printf("%s\n", str1);
                break;
            } else sum += (str1[i]-'0')*arr1[i];
        }
        if(!ok) continue;
        if(jiaoyan[sum%11] != str1[len-1]) {
            printf("%s\n", str1);
            flag = false;
        }
    }
    if(flag) printf("All passed");
    return 0;
}
