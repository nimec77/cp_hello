//
// Created by Dmitry Seloustev on 08.07.2022.
//

#include "fib_dynamic.h"

long FibDynamic::FibCalculate(int n) {
    if (f[n] == UNKNOWN) {
        f[n] = FibCalculate(n - 1) + FibCalculate(n - 2);
    }
    return f[n];
}

long FibDynamic::FibCalculateDriver(int n) {
    f[0] = 0;
    f[1] = 1;

    for (auto i = 2; i <= n; ++i) {
        f[i] = UNKNOWN;
    }

    return FibCalculate(n);
}

long FibDynamic::FibLoop(int n) {
    f[0] = 0;
    f[1] = 1;

    for (auto i = 2; i <= n; ++i) {
        f[i] = f[i - 1] + f[i -2];
    }

    return f[n];
}

long FibDynamic::FubUltimate(int n) {
    long back2 = 0, back1 = 1;
    long next;

    if (n == 0) {
        return 0;
    }
    for (auto i = 2; i < n; ++i) {
        next = back1 + back2;
        back2 = back1;
        back1 = next;
    }

    return back1 + back2;
}
