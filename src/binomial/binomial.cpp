//
// Created by Dmitry Seloustev on 08.07.2022.
//

#include "binomial.h"

long Binomial::BinomialCoefficient(int n, int m) {
    long bc[MAXN][MAXN];

    for (auto i = 0; i <= n; ++i) {
        bc[i][0] = 1;
    }
    for (auto j = 0; j <= n; ++j) {
        bc[j][j] = 1;
    }
    for (auto i = 1; i <=n; ++i) {
        for(auto j = 1; j < i; ++j) {
            bc[i][j] = bc[i - 1][j - 1] + bc[i - 1][j];
        }
    }
    return bc[n][m];
}
