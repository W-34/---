#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 100005;
const int mod=1e9+7;
inline int read(){
    int x = 0, f = 1; char ch = getchar();
    while (!isdigit(ch)) { if (ch == '-') f = -1; ch = getchar(); }
    while (isdigit(ch)) { x = (x << 1) + (x << 3) + (ch ^ 48); ch = getchar(); }
    return x * f;
}
signed main(){
    int n=read();
    
    system("pause");
    return 0;
}