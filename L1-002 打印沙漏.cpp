#include <cstdio>
#include <cstring>
using namespace std;
//n == 1 时 1
//n > 1 时 2+(n-1)*4
//求和 (4+(n-1)*4)*n/2-1
int main()
{
    char mark;
    int n, jl, duo;
    scanf("%d %c", &n, &mark);
    if(n == 1) {
        printf("%c\n0\n", mark);
    } else {
        for(int i = 1; i <= n; i++) {
            if((4+(i-1)*4)*i/2-1 > n) {
                jl = i-1;
                duo = n-((4+(i-2)*4)*(i-1)/2-1);
                break;
            }
        }
        for(int i = 0; i < jl; i++) {
            int temp = 1+((jl-i)-1)*2;
            for(int j = 0; j < i; j++)
                printf(" ");
            for(int j = 0; j < temp; j++)
                printf("%c", mark);
            printf("\n");
        }
        for(int i = 2; i <= jl; i++) {
            int temp = jl-i;
            for(int j = 0; j < temp; j++)
                printf(" ");
            for(int j = 0; j < 1+(i-1)*2; j++)
                printf("%c", mark);
            printf("\n");
        }
        printf("%d\n", duo);
    }
    return 0;
}
