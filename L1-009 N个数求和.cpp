#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

typedef long long ll;
ll gcd(ll a, ll b) {
    if(b) while((a %= b) && (b %= a));
    return a+b;
}
int main()
{
    int n;
    scanf("%d", &n);
    ll t1, t2;
    for(int i = 0; i < n; i++) {
        ll a1, a2;
        scanf("%lld/%lld", &a1, &a2);
//        printf("%lld %lld\n", a1, a2);
        if(i == 0) t1 = a1, t2 = a2;
        else {
            ll shang = gcd(t2, a2);
            ll fz1 = a2/shang*t1;
            ll fz2 = t2/shang*a1;
            ll fm = t2/shang*a2;
            ll fz, temp;
            fz = temp = fz1+fz2;
            if(fz < 0) temp = -temp;
            shang = gcd(temp, fm);
            fz /= shang;
            fm /= shang;
            t1 = fz, t2 = fm;
        }
//        printf("%lld %lld\n", t1, t2);
    }
    bool flag = t1 < 0;
    if(flag) t1 = -t1;
    ll shang = gcd(t1, t2);
    t1 /= shang;
    t2 /= shang;
//    if(flag) t1 = -t1;
//    if(flag) printf("-");
    if(t1 == 0) {
        printf("0");
        return 0;
    }
    if(t1 < t2) {
        if(flag) printf("-");
        printf("%lld/%lld", t1, t2);
    } else {
        if(t1%t2 == 0) {
            if(flag) printf("-");
            printf("%lld", t1/t2);
        } else {
            if(flag) printf("-");
            printf("%lld ", t1/t2);
            if(flag) printf("-");
            printf("%lld/%lld", t1%t2, t2);
        }
    }
    return 0;
}
