#include <bits/stdc++.h>

using namespace std;

int n, k;

int main(){
    scanf("%d%d", &n, &k);
    printf("%d", n / k + n % k);
    return 0;
}
