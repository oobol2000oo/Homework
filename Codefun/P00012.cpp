#include <bits/stdc++.h>

int n, m;

int main(){
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
