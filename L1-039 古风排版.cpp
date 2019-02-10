#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;
const int SIZE = 1110;
int main()
{
    char maze[SIZE], arr[SIZE][SIZE];
    memset(maze, 0, sizeof(maze));
    int n, len, i, s = 0;
    scanf("%d", &n);
    getchar();
    gets(maze);
    len = strlen(maze);
    for(i = 1; i*n < len; i++);
    for(int k = i-1; k >= 0; k--)
    {
        for(int j = 0; j < n; j++)
        {
            if(maze[s]) arr[j][k] = maze[s++];
            else arr[j][k] = ' ';
        }
    }
    for(int k = 0; k < n; k++)
    {
        for(int j = 0; j < i; j++)
            printf("%c", arr[k][j]);
        printf("\n");
    }
    return 0;
}

