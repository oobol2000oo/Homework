#include <bits/stdc++.h>

const int check[] {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

int n;

int main(){
    scanf("%d", &n);
    for (int i = 0; i < 14; ++i){
        if (n < check[i]) break;
        if (n % check[i] == 0){
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
